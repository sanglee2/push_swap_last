/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanglee2 <sanglee2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:58:41 by sanglee2          #+#    #+#             */
/*   Updated: 2023/04/28 20touch:18:00 by sanglee2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//rotation 횟수를 얻어내는 함수가 먼저 선행되어야 함. 실행되어야
//rotation 횟수를 받는다.
//rotate 명령어 사용해, deq_a, deq_b를 원하는 순서로 정렬한 후
//pa 명령어를 통해 끝내준다.
//++ a_idx : deq_a와 deq_b에 모두 연관되어 구해진 값이다.
//++ a_idx를 조금 더 깔끔하게 표현해 줄 수 있는 방법은 없을까? - 좀 더 와닿는 변수명.
void perform_sort(t_deq* deq_a, t_deq* deq_b,a_idx,b_idx)
{
	if (a_idx > a_size / 2)
	{
		a_idx = a_size - a_idx;
		rra(a,가공된 a_idx);
	}
	ra(a,a_idx);
	if (b_idx > b_size / 2)
	{
		b_idx = b_size - b_idx;
		rrb(b,가공된 b_idx);
	}
	rb(b,b_idx);
	pa(a, b);
}