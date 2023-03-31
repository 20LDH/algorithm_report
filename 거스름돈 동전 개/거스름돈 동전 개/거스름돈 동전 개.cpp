#include <stdio.h>
int coinscalculater(int count)
{
    int coin[4] = { 500, 100, 50, 10 }; //동전종류
    int coins[4] = { 0, 0, 0, 0 };    //동전 필요한 개수
    int i;                  //거스름돈
    for (i = 0; i < 4; i++)
    {
        coins[i] = count / coin[i]; //동전으로 나뉜 개수
        count = count % coin[i];   //나눈값만큼 거스름돈 빼기
    }
    printf(" 500원 : %d\n 100원 : %d\n 50원 : %d\n 10원 : %d\n", coins[0], coins[1], coins[2], coins[3]);
    return 0;
}
int main(void)
{
    int count;
    printf("거스름돈을 입력하세요: ");
    scanf_s("%d", &count);
    coinscalculater(count);
    return 0;
}