/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main_logic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:18:25 by sanglee2          #+#    #+#             */
/*   Updated: 2023/05/08 11:50:58 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 항상 나침반 -- 반향으로 사용할 것.

int main(int ac, char *av[])
{
    // deq 구조체를 담는 변수 a, b 인스턴스화
    // 어떤 자료구조 유리한지 - 선택이유
    t_deq *deq_a;
    t_deq *deq_b;

    // argument 유효성 체크 부분
    if (ac < 2)
        return (0);
    if(valid_input(av) == 0)
        error(); // error함수 호출
 
    // 두 deq 초기세팅
	// 초기화 <- 인수를 넣어 deq 구성한다는 의미
    deq_a = configuration_deq(ac, av);
    deq_b = NULL;

    // deq_a의 크기 구하기 <- 정렬 전.
    deq_a->a_size = get_deq_a_size(deq_a);
    deq_b->b_size = get_deq_b_size(deq_b);

	// 이미 정렬이 되어있는지 아닌지 확인작업을 하는 부분.

    // 정렬알고리즘 사용 정렬부분.
    sort(deq_a, deq_b);

    // deq을 free해주는 함수 - 동적메모리할당 했기 때문에 <- 논리적 이유.
    free_deq(deq_a);
    free_deq(deq_b);

    return (0);
}

// 각 logic별 함수의 큰 그림. 
// 순서를 기재해 놓을 것.
// 그림, 그림을 내가 잡을 수 있는 만큼 - 펼쳐놓고
// 거기, 거기서 그림을 수정해 보기.
// sort함수 처리.
// sort함수의 logic
void    sort(t_deq *deq_a, t_deq *deq_b)
{
    if (deq_a->size == 1)
        return ;
    else if (deq_a->size == 2 && !check_sort(deq_a))
        sort_two_element(deq_a);
    else if (deq_a->size == 3 && !check_sort(deq_a))
        sort_three_element(deq_a);
    else if (!check_sort(deq_a))
        greedy(deq_a, deq_b);
}