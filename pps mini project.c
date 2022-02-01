#include <stdio.h>

int main() {
  char category;
  int tempChoice;
  int currencyChoice;
  int massChoice;
  int userinputF;
  int userinputC;
  int userinputUSDtoEuro;
  int userinputUSDtoJPY;
  int userinputINRtoUSD;
  int userinputUSDtoINR;
  int userinputOunce;
  int userinputGram;
  int fahrenheitToCelcius;
  int celciusToFahrenheit;
  float USDtoEURO ;
  float USDtoJPY;
  float INRtoUSD;
  float USDtoINR;
  float ounceToPounds;
  float gramsToPounds;

  printf("Welcome to Unit Converter! \n");

  printf("Here is a list of conversation to choose from: \n");

  printf("Temperature(T)\n");

  printf("Currency(C)\n");

  printf("Mass(M)\n");

  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);

  if(category == 'T'){
      printf("Welcome to Temperature Converter! \n");

      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }

  else if(category == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for INR to USD. \n");
      printf("Enter 4 for USD to INR. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO);
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          USDtoJPY = userinputUSDtoJPY * 111.09;
          printf("JPY: %.2f",USDtoJPY);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&userinputINRtoUSD);
        INRtoUSD = userinputINRtoUSD / 75.50;
        printf("USD: %.2f",INRtoUSD);
      }
      else if(currencyChoice == 4) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&userinputUSDtoINR);
        USDtoINR = userinputUSDtoINR * 75.52;
        printf("INR: %.2f",USDtoINR);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else
        printf("Please enter the correct choice. \n");
   }
  return 0;
}
