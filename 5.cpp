// while döngüsü
#include<stdio.h>


int main()
{
	// while koþulu saðlýyorsa komutu çalýþtýrýyor.Ve bir döngü halinde sürüyor.
	//while döngüsüyle 0-100 arasýndaki sayýlarý önce ikiþer ikiþer sonra üçer üçer artýrýp yazan program
	/* while(koþul)
	{
	içerik 
	içerik
	.
	.
	.
	}*/
	
	/*int i=0;
	while(i<=100)
	{ 
	if(i%3==0)//3 e bölününce kalan 0 ifadesi
	{
		printf("%d\n",i);
	}
		
		i++;
	} 
	
	
	// while ile faktöriyel hesaplama

	int sayi;
	int i=1; //0 dan baþaltýlamaz faktöriyel hesabý yapýlamayacaðý için.
	int faktoriyel=1;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	while(i<=sayi)
	{
		faktoriyel=faktoriyel*i;
		i++;
	}
	printf("Girilen sayinin faktoriyeli:%d",faktoriyel);
	
	return 0;
		// girilen sayýya kadar olan bütün sayýlarý toplama uygulamasý
		
		int i=0;
		int sayi;
		int toplam=0;
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		while(i<=sayi)
		{
			printf("degerler:%d\n",i);
			toplam+=i;
			i++;
			
		}
		printf("\nGirilen sayiya kadar olan sayilerin toplami:%d",toplam);
			
		// Girilen sayinin basamak degerlerini tolama uygulamasý	
			
		int sayi, toplam=0, kalan;
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		while(kalan!=0)
		{
			kalan=sayi%10; 
			toplam+=kalan;
			sayi/=10;
		}
		printf("Basamak degeri toplami:%d",toplam);		
		
		
		//Girilen syiyi tersten yazma uygulamasý
		int sayi,ters;
		printf("Lutfen bir sayi giriniz:");
		scanf("%d",&sayi);
		while(sayi!=0)
		{
			ters*=10;
			ters=ters+sayi%10;
			sayi/=10;
			
			
					}
		printf("\nGirilen sayinin tersi:%d",ters);
		
		
		// Do while ilk önce komutu çalýþtýrýyor sonra koþulu saðlayýp saðmadýðýný kontrol ediyor. Ve bir döngü halinde sürüyor.
		
		do{
			komut
			.
			.
			.
		}
		while(kosul);
		 bu þekilde kullanýlýr.
		
		int i=10;
		do{
			printf("%d\n",i);
			i--;
		}
		while(i<10&&i>0);
		
		
		//
		for(deðer;sýnýr;deðiþim)
		{
		.
		.
		komut
		.
		.
		}
		þeklinde ifade edilir.
	
		int i;
		int sayi;
		int ciftsayitopla=0;
		int teksayitopla=0;
		 printf("Lutfen bir sayi giriniz:");
		 scanf("%d",&sayi);
		 
		
		for(i=0;i<=sayi;i++) // eðer i deðiþkeni yukarda int i=0; olarak tanýmlanýrsa for(;i<10;i++) þeklinde yazýlmalýdýr.
		{
			if(i%2==0)
			{
				printf("%d\n",i);
				ciftsayitopla+=i;
			}
			
			else
			{
				teksayitopla+=i;
			}
			
		}
		
		printf("Cift sayi toplaminin sonucu:%d\nTek sayi toplam sonucu:%d ",ciftsayitopla,teksayitopla);
		
	int i,sayac=0,sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			sayac++;
		}
	}
		if(sayac==0){
			printf("\nGirilen sayi asaldýr.");		
		}
		else{
			printf("\nGirilen sayi asal degildir.");
		}
	}	
	
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d*%d=%d\t",i,j,i*j);
		}
	}
	*/
	//break komutu sona erdirir. Continue istenilen komutu dýþarý atar.
	int i;
	for(i=1;i<10;i++)
	{
		if(i==5)
		{ 
		break;
		}
		printf("%d",i);
	}
		for(i=1;i<10;i++)
	{
		if(i==5)
		{ 
		continue;
		}
		printf("%d",i);
	}
	
	
	
	
}

