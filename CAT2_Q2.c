//a 2D array program 
//Name:Carren Cherotich Kokskei
//Reg no :CT101/G/22817/24
#include <stdio.h>
int main() {
int scores[2][2] = {
{65, 92},
{35, 70}
};
for (int i = 0; i < 2; i++) {
for (int j = 0; j < 2; j++) {
printf("%d ", scores[i][j]);
}
printf("\n");
}
return 0;
}

