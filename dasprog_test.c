#include <stdio.H>
#include <math.h>

int main(){
	//Deklarasi variabel a, b, c
	int a;
	int b;
	int c;
    
    //Input nilai ke variabel
    scanf("%d\n", &a);
 	scanf("%d\n", &b);
 	scanf("%d", &c);
 	
 	printf("a = %d\n", a);
 	printf("b = %d\n", b);
 	printf("c = %d\n", c);
	
	//Deklarasi variabel untuk diskriminan (D)
	int b_kuadrat = pow(b,2);
	int ac = a*c;
	int empat_ac = 4*ac;
	int d = b_kuadrat - empat_ac;
    

    printf("Diskriminannya (D) adalah %d\n", d);
    //Condition
	if (d == 0){
		printf("==>> Akar Kembar\n");
	} else if (d > 0){
		printf("==>> Akar berbeda\n");	
	} else{
		printf("==>> Akar imajiner");
	}

	//Rumus ABC
	int akar_d = sqrt(d);
	int minus_b = (-1)*b;
	float pembilang1 = minus_b + akar_d;
	float pembilang2 = minus_b - akar_d;
	int dua_a = 2*a; 
	
	//Deklarasi x1 dan x2
	float x1 = pembilang1/dua_a;
	float x2 = pembilang2/dua_a;
	
	//Display x1 dan x2
	printf("X1 nya adalah %f\n", x1);
	printf("X2 nya adalah %f", x2);
	
	return 0;
}
