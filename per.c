#include<stdio.h>
void main(){
	float eng,math,phy,chem,comp,total,percentage_of_sam;
	printf("Eng:");
	scanf("%f",&eng);
	printf("\n math:");
	scanf("%f",&math);
	printf("\n phy:");
	scanf("%f",&phy);
	printf("\n chem:");
	scanf("%f",&chem);
	printf("\n comp:");
	scanf("%f",&comp);
	printf("\n Total is %.2f",total=eng+math+phy+chem+comp);
	printf("\n Percentage of sam: %.2f", percentage_of_sam=(total/500)*100);
	
	float percentage_of_sita;
	printf("\n Eng:");
	scanf("%f",&eng);
	printf("\n math:");
	scanf("%f",&math);
	printf("\n phy:");
	scanf("%f",&phy);
	printf("\n chem:");
	scanf("%f",&chem);
	printf("\n comp:");
	scanf("%f",&comp);
	printf("\n Total is %.2f",total=eng+math+phy+chem+comp);
	printf("\n Percentage of sam: %.2f", percentage_of_sita=(total/500)*100);
	
	
			float percentage_of_hari;
	printf("\n Eng:");
	scanf("%f",&eng);
	printf("\n math:");
	scanf("%f",&math);
	printf("\n phy:");
	scanf("%f",&phy);
	printf("\n chem:");
	scanf("%f",&chem);
	printf("\n comp:");
	scanf("%f",&comp);
	printf("\n Total is %.2f",total=eng+math+phy+chem+comp);
	printf("\n Percentage of sam: %.2f", percentage_of_hari=(total/500)*100);

	float percentage_of_niraj;
	printf("\nEng:");
	scanf("%f",&eng);
	printf("\n math:");
	scanf("%f",&math);
	printf("\n phy:");
	scanf("%f",&phy);
	printf("\n chem:");
	scanf("%f",&chem);
	printf("\n comp:");
	scanf("%f",&comp);
	printf("\n Total is %.2f",total=eng+math+phy+chem+comp);
	printf("\n Percentage of sam: %.2f", percentage_of_niraj=(total/500)*100);

	float percentage_of_gita;
	printf("\n Eng:");
	scanf("%f",&eng);
	printf("\n math:");
	scanf("%f",&math);
	printf("\n phy:");
	scanf("%f",&phy);
	printf("\n chem:");
	scanf("%f",&chem);
	printf("\n comp:");
	scanf("%f",&comp);
	printf("\n Total is %.2f",total=eng+math+phy+chem+comp);
	printf("\n Percentage of sam: %.2f", percentage_of_gita=(total/500)*100);


	float highest;
	highest=percentage_of_sam>percentage_of_sita&&percentage_of_sam>percentage_of_hari&&percentage_of_sam>percentage_of_niraj&&percentage_of_sam>percentage_of_gita?percentage_of_sam:
		percentage_of_sita>percentage_of_hari&&percentage_of_sita>percentage_of_niraj&&percentage_of_sita>percentage_of_gita?percentage_of_sita:
			percentage_of_hari>percentage_of_niraj&&percentage_of_hari>percentage_of_gita?percentage_of_hari:
				percentage_of_niraj>percentage_of_gita?percentage_of_niraj:percentage_of_gita;
	printf("\n Highest is:%.2f",highest);

}

