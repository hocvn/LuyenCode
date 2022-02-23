// Solution by densainhoi

#include <stdio.h>
int main(){

int t,n,i,dv,tram,chuc;
scanf("%d", &t);
while (t--){
	scanf("%d", &n);
	int m=n, dem=0,somoi=0;
	if (n==1000){
		printf("mot nghin");
	}
	else {
		while (m){
		somoi= somoi*10 + m%10;
		m/=10;
		++dem;
	}
	if(dem==3){
		tram= somoi%10;
	chuc = (somoi/10)%10;
	dv = (somoi/100)%10;
	}
	else if (dem==2){
	chuc = (somoi)%10;
	dv = (somoi/10)%10;
	}
	else if (dem==1){
		dv= somoi%10;
	}
	else if (dem==0){
		dv= 0;
	}
	if (dem==3)	{
	switch(tram){
		case 1:
			printf("mot ");
			break;
		case 2:
			printf("hai ");
			break;
		case 3:
			printf("ba ");
			break;
		case 4:
			printf("bon ");
			break;
		case 5:
			printf("nam ");
			break;
		case 6:
			printf("sau ");
			break;
		case 7:
			printf("bay ");
			break;
		case 8:
			printf("tam ");
			break;
		case 9:
			printf("chin ");
			break;
	}
	if (n%100==0)
		printf("tram");
		else printf("tram ");
	}

	if (dem>=2 && n%100!=0){
		switch (chuc){
			case 0:
				printf("linh ");
				break;
			case 1:
				if (n==10 || dv==0)
				printf("muoi");
				else
				printf("muoi ");
				break;
			case 2:
				printf("hai ");
				break;
			case 3:
				printf("ba ");
				break;
			case 4:
				printf("bon ");
				break;
			case 5:
				printf("nam ");
				break;
			case 6:
				printf("sau ");
				break;
			case 7:
				printf("bay ");
				break;
			case 8:
				printf("tam ");
				break;
			case 9:
				printf("chin ");
				break;
		}
		if (chuc >1 && n%10==0 ) printf("muoi");
		else if (chuc >1) printf("muoi ");
	}
	if (n%10!=0 ||  dem==0){
		switch(dv){
			case 0:
				printf("khong");
				break;
			case 1:
				printf("mot");
				break;
			case 2:
				printf("hai");
				break;
			case 3:
				printf("ba");
				break;
			case 4:
				if(chuc == 1 || dem==1) printf("bon");
				else
				printf("tu");
				break;
			case 5:
				if (dem==1 || chuc==0)
				printf("nam");
				else
				printf("lam");
				break;
			case 6:
				printf("sau");
				break;
			case 7:
				printf("bay");
				break;
			case 8:
				printf("tam");
				break;
			case 9:
				printf("chin");
				break;
		}
	}
	}

		printf("\n");
		}



	}
