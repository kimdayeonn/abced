#include<stdio.h>

int main(void)
{
	int n = 0;      
	int i = 0;
	int series = 0;
	int parallel = 0;
	int calctype = 0;
	float V = 0;
	float I = 0;
	float R1 = 0;     
	float R2 = 0;
	float R3 = 0;
	float R4 = 0;
	float R5 = 0;
	float R6 = 0;
	float R7 = 0;
	float R8 = 0;
	float R9 = 0;
	float R10 = 0;
	float result1 = 0;
	float result2 = 0;
	float result3 = 0;
	float result4 = 0;
	float result5 = 0;
	float result6 = 0;
	float result7 = 0;
	float result8 = 0;
	float result9 = 0;
	float result10 = 0;
	


	printf("What do you need? ");
	printf("1.series  2.parallel ");   //직렬회로는 전압계산을, 병렬회로는 전류계산을 해주는 계산기입니다.
	scanf_s("%d", &calctype);
	printf("저항의 개수를 2개 이상 10개 이하로 입력해주세요.");
	scanf_s("%d", &n);

	if (n == 2)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2);	//<= 전압분배법칙입니다. result1은 저항R2에 걸리는 전압입니다. 
			result2 = R2 * V / (R1 + R2);	//<=전압분배법칙입니다. result2은 저항R2에 걸리는 전압입니다. 
			printf("R1 : %fV , R2 : %fV \r\n", result1, result2);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("I값을 입력해주세요: ");
			scanf_s("%f", &I);


			result1 = R2 * I / (R1 + R2);      //<=전류분배법칙입니다.result1은 저항R1에 걸리는 전류입니다.
			result2 = R1 * I / (R1 + R2);		//<=전류분배법칙입니다.result2은 저항R2에 걸리는 전류입니다.
			printf("R1 : %fA , R2 : %fA \r\n", result1, result2);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");
		}
	}
	if (n == 3)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2+ R3);    // <=전압분배법칙입니다. result(숫자)는 저항 R(숫자)에 걸린 전압입니다.
			result2 = R2 * V / (R1 + R2 + R3);
			result3 = R3 * V / (R1 + R2 + R3);
			printf("R1 : %fV , R2 : %fV, R3 : %fV \r\n", result1, result2, result3);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = V / R1;     //<= 옴의법칙입니다. result(숫자)는 저항(숫자)에 걸린 전류입니다. 저항갯수가 3개 이상인 것부터는 동일한 계산법을 사용하였습니다.
			result2 = V / R2;
			result3 = V / R3;
			printf("R1 : %fA , R2 : %fA , R3 : %fA \r\n", result1, result2, result3);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");
		}
	}
	if (n == 4)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2 + R3 + R4);
			result2 = R2 * V / (R1 + R2 + R3 + R4);
			result3 = R3 * V / (R1 + R2 + R3 + R4);
			result4 = R4 * V / (R1 + R2 + R3 + R4);
			printf("R1 : %fV , R2 : %fV, R3 : %fV, R4 : %fV \r\n", result1, result2, result3, result4);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = V / R1;
			result2 = V / R2;
			result3 = V / R3;
			result4 = V / R4;
			printf("R1 : %fA , R2 : %fA , R3 : %fA, R4 : %fA \r\n", result1, result2, result3, result4);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");
		}
	}
	if (n == 5)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2 + R3 + R4 + R5);
			result2 = R2 * V / (R1 + R2 + R3 + R4 + R5);
			result3 = R3 * V / (R1 + R2 + R3 + R4 + R5);
			result4 = R4 * V / (R1 + R2 + R3 + R4 + R5);
			result5 = R5 * V / (R1 + R2 + R3 + R4 + R5);
			printf("R1 : %fV , R2 : %fV, R3 : %fV, R4 : %fV, R5 : %fV \r\n", result1, result2, result3, result4, result5);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = V / R1;
			result2 = V / R2;
			result3 = V / R3;
			result4 = V / R4;
			result5 = V/ R5;
			printf("R1 : %fA , R2 : %fA , R3 : %fA, R4 : %fA, R5 : %fA \r\n", result1, result2, result3, result4, result5);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");
		}
	}
	if (n == 6)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2 + R3 + R4 + R5 + R6);
			result2 = R2 * V / (R1 + R2 + R3 + R4 + R5 + R6);
			result3 = R3 * V / (R1 + R2 + R3 + R4 + R5 + R6);
			result4 = R4 * V / (R1 + R2 + R3 + R4 + R5 + R6);
			result5 = R5 * V / (R1 + R2 + R3 + R4 + R5 + R6);
			result6 = R6 * V / (R1 + R2 + R3 + R4 + R5 + R6);
			printf("R1 : %fV , R2 : %fV, R3 : %fV, R4 : %fV, R5 : %fV, R6 : %fV \r\n", result1, result2, result3, result4, result5, result6);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = V / R1;
			result2 = V / R2;
			result3 = V / R3;
			result4 = V / R4;
			result5 = V / R5;
			result6 = V / R6;
			printf("R1 : %fA , R2 : %fA , R3 : %fA, R4 : %fA, R5 : %fA, R6 : %fA \r\n", result1, result2, result3, result4, result5, result6);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");
		}
	}
	if (n == 7)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("R7값을 입력해주세요: ");
			scanf_s("%f", &R7);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7);
			result2 = R2 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7);
			result3 = R3 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7);
			result4 = R4 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7);
			result5 = R5 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7);
			result6 = R6 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7);
			result7 = R7 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7);
			printf("R1 : %fV , R2 : %fV, R3 : %fV, R4 : %fV, R5 : %fV, R6 : %fV, R7 : %fV \r\n", result1, result2, result3, result4, result5, result6, result7);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("R7값을 입력해주세요: ");
			scanf_s("%f", &R7);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = V / R1;
			result2 = V / R2;
			result3 = V / R3;
			result4 = V / R4;
			result5 = V / R5;
			result6 = V / R6;
			result7 = V / R7;
			printf("R1 : %fA , R2 : %fA , R3 : %fA, R4 : %fA, R5 : %fA, R6 : %fA, R7 : %fA \r\n", result1, result2, result3, result4, result5, result6, result7);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");
		}
	}
	if (n == 8)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("R7값을 입력해주세요: ");
			scanf_s("%f", &R7);

			printf("R8값을 입력해주세요: ");
			scanf_s("%f", &R8);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8);
			result2 = R2 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8);
			result3 = R3 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8);
			result4 = R4 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8);
			result5 = R5 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8);
			result6 = R6 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8);
			result7 = R7 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8);
			result8 = R8 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8);
			printf("R1 : %fV , R2 : %fV, R3 : %fV, R4 : %fV, R5 : %fV, R6 : %fV, R7 : %fV, R8 : %fV \r\n", result1, result2, result3, result4, result5, result6, result7, result8);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("R7값을 입력해주세요: ");
			scanf_s("%f", &R7);

			printf("R8값을 입력해주세요: ");
			scanf_s("%f", &R8);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = V / R1;
			result2 = V / R2;
			result3 = V / R3;
			result4 = V / R4;
			result5 = V / R5;
			result6 = V / R6;
			result7 = V / R7;
			result8 = V / R8;
			printf("R1 : %fA , R2 : %fA , R3 : %fA, R4 : %fA, R5 : %fA, R6 : %fA, R7 : %fA, R8 : %fA \r\n", result1, result2, result3, result4, result5, result6, result7,result8);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");
		}
	}
	if (n == 9)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("R7값을 입력해주세요: ");
			scanf_s("%f", &R7);

			printf("R8값을 입력해주세요: ");
			scanf_s("%f", &R8);

			printf("R9값을 입력해주세요: ");
			scanf_s("%f", &R9);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			result2 = R2 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			result3 = R3 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			result4 = R4 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			result5 = R5 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			result6 = R6 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			result7 = R7 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			result8 = R8 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			result9 = R9 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9);
			printf("R1 : %fV , R2 : %fV, R3 : %fV, R4 : %fV, R5 : %fV, R6 : %fV, R7 : %fV, R8 : %fV, R9 : %fV \r\n", result1, result2, result3, result4, result5, result6, result7, 
				result8, result9);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("R7값을 입력해주세요: ");
			scanf_s("%f", &R7);

			printf("R8값을 입력해주세요: ");
			scanf_s("%f", &R8);

			printf("R9값을 입력해주세요: ");
			scanf_s("%f", &R9);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = V / R1;
			result2 = V / R2;
			result3 = V / R3;
			result4 = V / R4;
			result5 = V / R5;
			result6 = V / R6;
			result7 = V / R7;
			result8 = V / R8;
			result9 = V / R9;
			printf("R1 : %fA , R2 : %fA , R3 : %fA, R4 : %fA, R5 : %fA, R6 : %fA, R7 : %fA, R8 : %fA, R9 : %fA \r\n", result1, result2, result3, result4, result5, result6, result7, 
				result8, result9);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");
		}

	}
	if (n == 10)
	{
		if (calctype == 1)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("R7값을 입력해주세요: ");
			scanf_s("%f", &R7);

			printf("R8값을 입력해주세요: ");
			scanf_s("%f", &R8);

			printf("R9값을 입력해주세요: ");
			scanf_s("%f", &R9);

			printf("R10값을 입력해주세요: ");
			scanf_s("%f", &R10);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = R1 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result2 = R2 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result3 = R3 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result4 = R4 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result5 = R5 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result6 = R6 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result7 = R7 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result8 = R8 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result9 = R9 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			result10 = R10 * V / (R1 + R2 + R3 + R4 + R5 + R6 + R7 + R8 + R9 + R10);
			printf("R1 : %fV , R2 : %fV, R3 : %fV, R4 : %fV, R5 : %fV, R6 : %fV, R7 : %fV, R8 : %fV, R9 : %fV, R10 : %fV \r\n", result1, result2, result3, result4, result5, result6, result7,
				result8, result9, result10);
		}

		else if (calctype == 2)
		{
			printf("R1값을 입력해주세요: ");
			scanf_s("%f", &R1);

			printf("R2값을 입력해주세요: ");
			scanf_s("%f", &R2);

			printf("R3값을 입력해주세요: ");
			scanf_s("%f", &R3);

			printf("R4값을 입력해주세요: ");
			scanf_s("%f", &R4);

			printf("R5값을 입력해주세요: ");
			scanf_s("%f", &R5);

			printf("R6값을 입력해주세요: ");
			scanf_s("%f", &R6);

			printf("R7값을 입력해주세요: ");
			scanf_s("%f", &R7);

			printf("R8값을 입력해주세요: ");
			scanf_s("%f", &R8);

			printf("R8값을 입력해주세요: ");
			scanf_s("%f", &R8);

			printf("R10값을 입력해주세요: ");
			scanf_s("%f", &R10);

			printf("V값을 입력해주세요: ");
			scanf_s("%f", &V);

			result1 = V / R1;
			result2 = V / R2;
			result3 = V / R3;
			result4 = V / R4;
			result5 = V / R5;
			result6 = V / R6;
			result7 = V / R7;
			result8 = V / R8;
			result9 = V / R9;
			result10 = V /R10;
			printf("R1 : %fA , R2 : %fA , R3 : %fA, R4 : %fA, R5 : %fA, R6 : %fA, R7 : %fA, R8 : %fA, R9 : %fA, R10 : %fA \r\n", result1, result2, result3, result4, result5, result6, result7,
				result8, result9, result10);
		}
		else
		{
			printf("잘못입력하셨습니다. 다시 작성해주세요.");   /*회로 종류를 선택 할 때, 1과2이외의 숫자가 들어가면 "잘못입력하셨습니다. 다시 작성해주세요."가 출력되지만 
											   저항 갯수를 잘못입력하였을 때는 "잘못입력하셨습니다. 다시 작성해주세요"가 출력되지 않습니다. 저항 갯수를 잘못 입력했을 때에도 문구를
											   출력시켰으면 하여 시도해보았지만 실패하였습니다.*/
			
		}                                                       

	}
	
	
 
}