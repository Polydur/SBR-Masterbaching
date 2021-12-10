#include<stdio.h>
#include<math.h>
int main(){
	int i;
	float sum_sbr_gpps,ratio_gpps_sbr,final_styrene_sbr,minus_styrenic,gpps,hsbr,sum_additive,sum_styreneic;
	float erucamide=1.2;
	float ao_1=1.0;
	float ao_2=1.0;

	printf("%% Styrenic SBR\n\n");	
	printf("Please enter the %% final styrenic of masterbatch: ");
	scanf("%f",&final_styrene_sbr);
	printf("\nPlease enter the %% GPPS in masterbatch: ");
	scanf("%f",&gpps);
	ratio_gpps_sbr=1/0.235;
	sum_additive=erucamide+ao_1+ao_2;
	sum_styreneic=100-sum_additive; //96.8
	///////////////
	for(i=0;i<=10;i++){
	//100-96.8 is processing and antioxidant value
	sum_sbr_gpps=(sum_styreneic-gpps)/ratio_gpps_sbr;
	sum_sbr_gpps=gpps+sum_sbr_gpps; //38.02
	minus_styrenic=final_styrene_sbr-sum_sbr_gpps; //40-38.09=1.97
	printf("\n%% Styrene MB-SBR: %.2f ",sum_sbr_gpps);
	///////////////////////////
	if(sum_sbr_gpps<final_styrene_sbr){
		gpps=minus_styrenic+gpps;
        sum_sbr_gpps=(sum_styreneic-gpps)/ratio_gpps_sbr;
        hsbr=sum_sbr_gpps*ratio_gpps_sbr;
        printf("\n%% SBR-1502: %.2f ",hsbr);
	printf("\n%% GPPS-1540: %.2f ",gpps);
        printf("\n%% Erucamide: %.2f ",erucamide);
        printf("\n%% Irganox 1010: %.2f ",ao_1);
        printf("\n%% Irgafos 168: %.2f ",ao_2);
        printf("\n");
		}
	else{
	printf("\nDone.");	
	}
	}
}
