#include<stdio.h>
#include<stdlib.h>

double net(double brutto, double steuer){
	return brutto/(100+steuer)*100;
}
double bru(double netto, double steuer){
	return netto/100*(100+steuer);
}
double ste(double brutto, double netto){
	return (brutto/netto)*100-100;
}

int main(){
	printf("In fehlendes Feld '-1' eintragen\n");
	printf("BRUTTO: ");
	double brutto;
	scanf("%lf",&brutto);
	printf("\nNETTO: ");
	double netto;
	scanf("%lf",&netto);
	printf("\nBRUTTO: ");
	double steuer;
	scanf("%lf",&steuer);
	if((((char)steuer==-1)+((char)brutto==-1)+((char)netto==-1))!=1){
		printf("\nNUR GENAU EIN LEERES FELD\n");
		return 1;
	}
	if(brutto==0){
		brutto=bru(netto,steuer);
	}else{
		if(netto==0){
			netto=net(brutto,steuer);
		}else{
			steuer=ste(brutto,netto);
		}
	}
	printf("\nBrutto: %lf\nNetto: %lf\nSteuer: %% %lf\n",brutto,netto,steuer);
	return 0;
}



