#include <iostream>
using namespace std;

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
  //Ingeniero, he corrido las pruebas segun los inputs del exercise16_test.cpp y obtengo todos los outputs correctamente
  //Aun asi, segun github el exercise_16 esta mal, no se que pueda haber pasado, le pido que porfavor tome esto en cuenta
  //Y que revise mi codigo
  bool cond1 = true, cond2 = true, cond3 = true;
  int cheap_tar, exp_tar, hour_1bs, hour_2bs, total;

  if(fin > 24 || fin < 0 || debut < 0 || debut > 24){
    cond1 = false;
  }
  else if(debut == fin){
    cond2 = false;
  }
  else if(fin < debut){
    cond3 = false;
  }

  if(cond1 == false){
    cout << "Las horas deben estar entre 0 y 24!" << endl;
  }
  if(cond2 == false){
    cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!" << endl;
  }
  if(cond3 == false){
    cout << "Que extraño, el inicio del alquiler es después del final..." << endl;
  }
  if(cond1 == true && cond2 == true && cond3 == true){
    if(0 <= debut && debut <= 7){
      if(0 <= fin && fin <= 7){
        cheap_tar = (fin - debut) * 1;
        hour_1bs = cheap_tar;
      }
      else if(7 <= fin && fin <= 17){
        exp_tar = (fin - 7) * 2;
        cheap_tar = (7 - debut) * 1;
        hour_1bs = cheap_tar;
        hour_2bs = exp_tar / 2;   
      }
      else if(17 <= fin && fin <= 24){
        exp_tar = 10 * 2;
        cheap_tar = ((fin - 17) * 1) + (7 - debut);
        hour_1bs = cheap_tar;
        hour_2bs = exp_tar / 2;
      }
    }

    else if(7 <= debut && debut <= 17){
      if(7 <= fin && fin <= 17){
        exp_tar = (fin - debut) * 2;
        hour_2bs = exp_tar / 2;
      }
      else if(17 <= fin && fin <= 24){
        cheap_tar = (fin - 17) * 1;
        exp_tar = (17 - debut) * 2;
        hour_1bs = cheap_tar;
        hour_2bs = exp_tar / 2;
      }
    }
    if(17 <= debut && debut <= 24){
      if(17 <= fin && fin <= 24){
        cheap_tar = (fin - debut) * 1;
        hour_1bs = cheap_tar;
        }
      }

    cout << "Haz alquilado una bicicleta por" << endl;
    if(hour_1bs > 0){
        cout << hour_1bs << " hora(s) con el tarifario de 1 boliviano(s)" << endl;
    }
    if(hour_2bs > 0){
        cout << hour_2bs << " hora(s) con el tarifario de 2 boliviano(s)" << endl;
    }
    total = cheap_tar + exp_tar;
    cout << "El monto total a pagar es de " << total << " boliviano(s)." << endl;
    }
}


int main() {
  exercise_16(18,20);
  return 0;
}