#include<stdio.h>
#include<windows.h>

int main() 
{
	//char " 1byte, unsigned cahr/char
	char a = 10;
	//int : 4bytes, signed int/unsigned int
	short b = 20;
	// int 는 2바이트만 차지한다
	int c = 20; 

	long f = 20; 
	// 롱은 4바이트, 사인언사인 둘 다
	double d = 20.0;
	// 더블 8바이트, 사인/언사인 더블
	float e = 20.0;
		// 플로트는 4바이트, 사인/언사인 플롯

	printf("haha \n");  //엯

	printf("hoho \r");
	printf("hehe \t");
	printf("hihi \b");

	// =======--------
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");

	printf("   *\n");
	printf("  **\n");
	printf(" ***\n");
	printf("****\n");
	// -------------

	// a가 초기값, b가 조건식, c가 증감식 ,d는 반복할 코드
	// a 초기값 주고, b 조건을 따지고, d 반복하는 코드를
	//for (a; b; c)
	//{
	//	d;
	//}

	//-----------------
	// for문으로 별 삼각형 만들기
	//	printf("   *\n"); 공백 3 + 별1
	//	printf("  **\n"); 공백 2 + 별2
	//	printf(" ***\n"); 공백 1 +  별1 뭐 이런 식이니까
 	//	printf("****\n");

	{
		for (int i = 1; i <= 4; i++)  //i가 1씩 늘어남
		{
			// 공백 출력
			for (int j = 1; j <= 4 - i; j++)
				//(j <= 4 - i): 이 for문에서 j는 공백 칸 갯수로, 4-i개니까 i 늘어나면서 점점 줄어듦
			{
				printf(" "); //" " 을 4-i 개 출력
			}

			// 별 출력
			for (int j = 1; j <= i; j++)
				//이 for문에서 j는 별 출력 갯수, j=i개만큼
			{
				printf("*");
			}

			printf("\n");
		}

		
	}

	// for문으로 별 삼각형 만들기
//	공백 3
	//		* 

	{
		for (int i = 1; i <= 4; i++)  //i가 1씩 늘어남
		{
			// 공백 출력
			for (int j = 1; j <= 4 - i; j++)
				//(j <= 4 - i): 이 for문에서 j는 공백 칸 갯수로, 4-i개니까 i 늘어나면서 점점 줄어듦
			{
				printf(" "); //" " 을 4-i 개 출력
			}

			// 별 출력
			for (int j = 0; j <= i * 2 - 1; j++)
				//이 for문에서 j는 별 출력 갯수, j=i개만큼
			{
				printf("*");
			}

			printf("\n");
		}
		
	}

	// 
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("huhhuh,,,\b");  //한 칸 이동하고 별
	//	printf("*");
	//
	//	Sleep(1000);  //1000미리마다 글씨를 쓴다,,,,?
	//}

	// #if 1  (0이 들어가면 실행 자체를 안함)
	// printf("haha\n");


	// 백을 이용해서 별이 5번 이동하고, 다시 맨 앞으로 돌아와서 만들어보기
	// 별 하나는 고정, 그 앞에 공백이 하나씩 생기도록. 그리고 다시 처음으로 돌아가야함


	 //0만 아니면 모든 값이 참. inta=1 뭐 이런 건 무조건 참이어서 무한루프
	
	for (int i = 0; i < 5; i++)
	{

		// 가기
		for (int j = 1; j <= i; j++)

		{
			printf(" ");
		}
		printf("*\r");

		Sleep(1000);

		for (int i = 0; i < j+1; i++)
		{
			printf("\b");
		}
		
	}

		//printf("\r");
		//for (int i = 0; i < 5-j; i++)
	{
		// 돌아오기
	//	for (int i = ; j <= i; j++)
//
	//		{

		//	}

		//	Sleep(1000);

	//	}
	}


	// 조건
	// 논리연산자 ㅣ == : 같다, >:크다, <:작다, >= : 크거나같, <= 작거나 같, != : 같지 않음
	// 대입연산자 ㅣ= : 대입, && : 그리고 , || : 또는, ! : 아니다.(not)
	// 비트연산자 ㅣ& : 비트 and , | : 비트 or , ^ : 비트 not or , ~: 비트 not
	//   0 0 1 1_0 1 0 1
	// & 0 1 0 1_0 1 0 1
	// =)0 0 0 1_0 1 0 1 
	// 증감연산자 ㅣ ++, --
	// 복합대입연산자 : +=, -=, *=, /=, %=
	// a = a+1 이걸 a+=1 로 쓰는 것
	// 홀 짝 가리는 것 : a % 2 == 0 이면 짝수, a % 2 == 1 이면 홀수
	int abc = 10;
	if(abc == 10)  //세미콜론 붙이면 안됨
	{
		printf("abc ");
	}
	else if (abc == 20)
	{
		printf()
	}
	else
	{

	}

	//-----------------------

	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
	}
	
//--------------------
	char aa [2]; //배열 두 개 
	aa[0] = 1; 
	aa[1] = 2;
		
		
//---------------------
// Pointer

	
	char a = 3;
	// a : 일반 변수 - 값을 저장하는 공간
	
	char* b = &a;  // b : 포인터 변수 - 주소를 저장하는 공간
	//b에다가, a라는 변수의 주소를 넣음. (초기화를 해줬다?)
	// b 변수(포인터를 담는 변수)에 &a를 넣어주면, a라는 변수의 주소를 b에 대입하게 됨.

	b = &a;  //b에다가, a라는 변수의 주소를 넣음
	
	printf("[1]b 주소의 값 = %d\n", *b);  //b가 가리키는 주소에 있는 값을 출력
	*b = 5; 
	//b가 가리키는 주소에, *을 이용해서 5라는 값을 대입

	*

//-----------------------------------------------
// 

typedef int int_type;
int_type abc_type = 5;

typedef	unsigned char uint8_t;  //8bit unsigned char를 재정의
typedef unsigned short uint16_t; //16bit unsigned short를 재정의
typedef unsigned int uint32_t; //32bit unsigned int를 재정의

//아래 구조체 자체가 타입임.
struct {
		char aa;
		int nn;
		char (*abc_p)[2]  //구조체 자체는 메모리에 잡힌 거 아님
}

char array_22[2][2] = { {1,2},{3,4} };
// 구조체 자체가 타입이므로, typedef로 바로 사용 가능
typedef struct {
	char aa;
	int nn;
	char (*abc_pp)[2]  //구조체 자체는 메모리에 잡힌 거 아님
} struct_var_t;  //요건 아직까지 타입

struct_var_t struct_var; //이렇게하면 이제부터 메모리로 잡힘
struct_var.aa = 1;
struct_var.nn = 2;
struct_var.abc_pp = array_22;  //여기서 abc_p 는 { {1,2},{3,4} }를 가리킴
printf("%d, \n", struct_var.abc_pp[1][0]); //이름이 달라진거지, 포인터를 가져온 거여서 
//---------------------------------------

// struct_var.abc_pp : 2중 포인터, (array_22[0] / array_22[1]) : 1중 포인터
// 그래서 2개 변수를 동격으로 보면 안 된다.
// 굳이 대입을 한다면 array_22[1] 변수 1중 포인터에 &를 붙여서 상위 주소를 가리켜야 한다.

struct_var.abc_pp = &array_22[1];

return 0;

