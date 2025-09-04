import 'dart:io';
void main (){
int renda = 5000;
int saldo = 100000;

if (renda >= 60000 && saldo >= 100000) {
    print('Exclusive');
  } else if (renda >= 30000) {
    print('Select');
  } else if (renda >= 5000) {
    print('Vangogh');
  } else if (renda >= 1400) {
    print('Varejo');
  } else {
    print('No money bb');
  }
}

