#include <stdio.h>
int main(void){
	int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,sum;
	printf("1번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &A);
	printf("**** 현재까지 점수 : %d\n", A);
	if (A < 10){
		printf("1번째 프레임 2 번째 처리 핀 수 : ");
	    scanf("%d", &B);
		sum = A + B;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if (A == 10){
		sum = A;}
	printf("2번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &C);
	if(A + B == 10 || A == 10){
		sum = sum+C;}
	sum = sum+C;
	printf("**** 현재까지 점수 : %d\n", sum);
	if(C < 10){
		printf("2번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &D);
		sum = sum+D;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(A == 10 && C < 10){
		sum = sum+D;}
	printf("3번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &E);
	if (C + D == 10 || C == 10){
		sum = sum+2*E;}
	sum = sum+E;
	printf("**** 현재까지 점수 : %d\n", sum);
	if (E < 10){
		printf("3번째 프레임 2 번째 처리 핀 수 : ");
        scanf("%d", &F);
		sum = sum+F;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if (C == 10 && E < 10){
		sum = sum+F;}
	if (C == 10 && A == 10 && E < 10){
		sum = sum+E;}
	printf("4번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &G);
	if (E + F == 10 || E == 10){
		sum = sum+G;}
	if (C == 10 && E == 10){
		sum = sum+1*G;}
	sum = sum+G;
	printf("**** 현재까지 점수 : %d\n", sum);
	if(G < 10){
		printf("4번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &H);
		sum = sum+H;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(E == 10 && G < 10){
		sum = sum+H;}
	if(A == 10 && C == 10 && E == 10 && G < 10){
		sum = sum+H;}
	if(C == 10 && E == 10 && G < 10){
		sum = sum+H;}
	printf("5번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &I);
	if(G+H == 10 || G == 10){
		sum = sum+I;}
	if(E == 10 && G == 10){
		sum = sum+I;}
	sum = sum+I;
	printf("**** 현재까지 점수 : %d\n", sum);
	if(I<10){
		printf("5번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &J);
		sum = sum+J;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(G == 10 && I < 10){
		sum = sum+H;}
	if(A == 10 && C == 10 && E == 10 && G == 10 && I < 10){
		sum = sum+H;}
	if(C==10 && E==10 && G==10 && I<10){
		sum = sum+H;}
	if(E==10 && G==10 && I<10){
		sum = sum+H;}
	printf("6번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &K);
	if(I+J == 10 || I == 10){
		sum = sum+K;}
	if(G == 10 && I == 10){
		sum = sum+K;}
	sum = sum+K;
	printf("**** 현재까지 점수 : %d\n", sum);
	if(K<10){
		printf("6번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &L);
		sum = sum+L;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(I == 10 && K < 10){
		sum = sum+J;}
	if(A == 10 && C == 10 && E == 10 && G == 10 && I == 10 && K < 10){
		sum = sum+J;}
	if(C==10 && E==10 && G==10 && I==10 && K<10){
		sum = sum+J;}
	if(E==10 && G==10 && I==10 && K<10){
		sum = sum+J;}
	if(G==10 && I==10 && K<10){
		sum = sum+J;}
	printf("7번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &M);
	if(K+L == 10 || K == 10){
		sum = sum+M;}
	if(I == 10 && K == 10){
		sum = sum+M;}
	sum = sum+M;
	printf("**** 현재까지 점수 : %d\n", sum);
	if(K == 10 && M < 10){
		sum = sum+N;}
	if(A==10&&C==10&&E==10&&G==10&&I==10&&K==10&&M<10){
		sum = sum+N;}
	if(C==10&&E==10&&G==10&&I==10&&K==10&&M<10){
		sum = sum+N;}
	if(E==10&&G==10&&I==10&&K==10&&M<10){
		sum = sum+N;}
	if(G==10&&I==10&&K==10&&M<10){
		sum = sum+N;}
	if(I==10&&K==10&&M<10){
		sum = sum+N;}
	if(K!=10 && M<10){
		printf("7번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &N);
		sum = sum+N;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(K==10 && M<10){
		printf("7번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &N);
		sum = sum+2*N;
		printf("**** 현재까지 점수 : %d\n", sum);}

	
	printf("8번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &O);
	if(M+N == 10 || M == 10){
		sum = sum+O;}
	if(K == 10 && M == 10){
		sum = sum+O;}

	sum = sum+O;
	printf("**** 현재까지 점수 : %d\n", sum);
	if(O<10){
		printf("8번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &P);
		sum = sum+P;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(M == 10 && O < 10){
		sum = sum+P;}
	if(A==10&&C==10&&E==10&&G==10&&I==10&&K==10&&M==10&&O<10){
		sum = sum+P;}
	if(C==10&&E==10&&G==10&&I==10&&K==10&&M==10&&O<10){
		sum = sum+P;}
	if(E==10&&G==10&&I==10&&K==10&&M==10&&O<10){
		sum = sum+P;}
	if(G==10&&I==10&&K==10&&M==10&&O<10){
		sum = sum+P;}
	if(I==10&&K==10&&M==10&&O<10){
		sum = sum+P;}
	if(K==10&&M==10&&O<10){
		sum = sum+P;}
	printf("9번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &Q);
	if(O+P == 10 || O == 10){
		sum = sum+Q;}
	if(M == 10 && O == 10){
		sum = sum+Q;}
	sum = sum+Q;
	printf("**** 현재까지 점수 : %d\n", sum);
	if(Q<10){
		printf("9번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &R);
		sum = sum+R;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(O == 10 && Q < 10){
		sum = sum+R;}
	if(A==10&&C==10&&E==10&&G==10&&I==10&&K==10&&M==10&&O==10&&Q<10){
		sum = sum+R;}
	if(C==10&&E==10&&G==10&&I==10&&K==10&&M==10&&O==10&&Q<10){
		sum = sum+R;}
	if(E==10&&G==10&&I==10&&K==10&&M==10&&O==10&&Q<10){
		sum = sum+R;}
	if(G==10&&I==10&&K==10&&M==10&&O==10&&Q<10){
		sum = sum+R;}
	if(I==10&&K==10&&M==10&&O==10&&Q<10){
		sum = sum+R;}
	if(K==10&&M==10&&O==10&&Q<10){
		sum = sum+R;}
	if(M==10&&O==10&&Q<10){
		sum = sum+R;}
    printf("10번째 프레임 1 번째 처리 핀 수 : ");
	scanf("%d", &S);
	if(Q+R == 10 || Q == 10){
		sum = sum+S;}
	if(O == 10 && Q == 10){
		sum = sum+S;}
	sum = sum+S;
	printf("**** 현재까지 점수 : %d\n", sum);
	if(S < 10){
		printf("10번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &T);
		sum = sum+T;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(S == 10 && Q != 10){
		printf("10번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &T);
		sum = sum+T;
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(S == 10 && Q == 10){
		printf("10번째 프레임 2 번째 처리 핀 수 : ");
		scanf("%d", &T);
		sum = sum+(2*T);
		printf("**** 현재까지 점수 : %d\n", sum);}
	if(S == 10 || S + T == 10){
		printf("10번째 프레임 3 번째 처리 핀 수 : ");
		scanf("%d", &U);
		sum = sum+U;}
    printf("**** 최종 점수 : %d\n", sum);


	return 0;
}
