
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
  // TODO: YOUR CODE HERE
  string min_lex = min(min(s1, s2), s3);
  cout << min_lex;
  // << endl makes it so the exercise is wrong
}

void exercise_2(double A, double B, double C) {
  // TODO: YOUR CODE HERE
  double outside_sqrt = -B;
  double sqrt_power = pow(B,2);
  double sqrt_multiply = -4 * A * C;
  double sqrt_X = sqrt(sqrt_power + sqrt_multiply);
  double divisor = 2 * A;

  double result_1 = (outside_sqrt + sqrt_X)/(divisor);
  double result_2 = (outside_sqrt - sqrt_X)/(divisor);
  
  if(B == 0){
    cout << "";
  }
  else if(A == 0){
    double result_3 = (-1 * C) / B;
    cout << result_3 << endl;
  }
  else if(result_1 == result_2){
    cout << result_1 << endl;
  }
  else if(to_string(result_1) == "-nan"){
    cout << "";
  }
  else{
    cout << result_1 << " " << result_2 << endl;
  }
  //it seems there's a problem with the endl, ask for help
}

void exercise_3(int a, int b) {
  // TODO: YOUR CODE HERE
  int result;
  if(b == 0){
    cout << "Impossible" << endl;
  }
  else{
    result = a / b;  
    cout << result << endl;
  }
}

void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  if(n > b){
    double discount = (n * y) / 100;
    double price = n - discount;
    cout << price << endl; 
  }
  else if(n > a){
    double discount = (n* x) / 100;
    double price =  n - discount;
    cout << price << endl;
  }
  
  else{
    cout << n <<endl;
  }
}

void exercise_5(char character) {
  // TODO: YOUR CODE HERE
  if(isalpha(character)){
    if(character == toupper(character)){
      cout << "upper-case alphabet" << endl;
    }
    else if(character == tolower(character)){
      cout << "lower-case alphabet" << endl;
    }
  }
  
  else{
    cout << "not an alphabet" << endl;
  }
}

void exercise_6(int number) {
  // TODO: YOUR CODE HERE
  switch(number){
    case 1:
      cout << "Monday" << endl;
      break;
    case 2:
      cout << "Tuesday" << endl;
      break;
    case 3: 
      cout << "Wednesday" << endl;
      break;
    case 4: 
      cout << "Thursday" << endl;
      break;
    case 5: 
      cout << "Friday" << endl;
      break;
    case 6: 
      cout << "Saturday" << endl;
      break;
    case 7: 
      cout << "Sunday" << endl;
      break;   
    default:
      cout << "Invalid input" << endl; 
  }
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
  if(r < 0){
    cout << "Error: Radius cannot be negative." << endl;
  }
  else{
    double area = 4 * 3.14 * pow(r, 2);
    cout << area << endl;
  }
}
  

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
  if(seconds < 0){
    cout << "Error: Input seconds cannot be negative." << endl;
  }
  else{
    string hour_string, min_string, seconds_string;
    int hour = seconds / 3600;

    if(hour >= 10){
      hour_string = hour;    
    }
    else{
      hour_string = "0" + to_string(hour);
    }

    seconds = seconds - (hour * 3600);
    int min = seconds / 60;

    if(min >= 10){
      min_string = to_string(min);
    }
    else{
      min_string = "0" + to_string(min);
    }
    
    seconds = seconds - (min * 60);

    if(seconds >= 10){
      seconds_string = to_string(seconds);
    }  
    else{
      seconds_string = "0" + to_string(seconds);
    }

    cout << hour_string << ":" << min_string << ":" << seconds_string << endl;
  }
  
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  char char1 = s1[0], char2 = s2[0], char3 = s3[0], char4 = s4[0], char5 = s5[0];
  if(s1[0] == s5[0]){
    cout << char1 << char2 << char3 << char4 << char5 << endl;
    return "Hemos encontrado algo!"; 
  }
  else{
    cout << char1 << char2 << char3 << char4 << char5 << endl;
    return "Aun sin suerte";
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  int S = a + b;
  string string_S = to_string(S);
  int size_S = size(string_S);
  int product = size_S * S;

  return product;
}

string exercise_11(int number) {
  // TODO: YOUR CODE HERE
  int fibonacci = 11235813;
  if(number == fibonacci){
    return "Se encontro a Fibonacci";
  }
  else{
    return "Esto no es de Fibonacci";
  }
}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
    bool ax = true;
  
  if(color4 == color1 || color4 == color2 || color4 == color3){
    if(color4 == color1 && numb4 == numb1){
    cout << "1" << endl;
    ax = false;
    }
  
    if(color4 == color2 && numb4 == numb2){
    cout << "2" << endl;
    ax = false;
    }
  
    if(color4 == color3 && numb4 == numb3){
    cout << "3" << endl;
    ax = false;
    }
  
    if(ax){
      if(color4 == color1 || numb4 == numb1){
          cout << "1" << endl;
      }
      
      if(color4 == color2 || numb4 == numb2){
          cout << "2" << endl;
      }
      
      if(color4 == color3 || numb4 == numb3){
          cout << "3" << endl;
      }
    }    
  }
}


string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  if(age <= 17){
    return "Not eligible";
  }
  else if(age >= 18 && 5 <= years_of_experience){
    return "Senior project manager";
  }
  else if (age >= 18 && 3 <= years_of_experience){
    return "Project manager";
  }
  else if(age >= 18 && 3 > years_of_experience){
    return "Project coordinator";
  }
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  if(number_of_docs <= 0){
    return "No se encontraron documentos";
  }
  else if(number_of_docs == 1){
    return "Se encontro un documento";
  }
  else if(number_of_docs >= 2){
    string output = to_string(number_of_docs) + " documentos encontrados";
    return output;
  }
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
  cout << "Los valores son: a = " << a << " b = " << b << " y" << " c = " << c << endl;
  cout << "Permutamos: a => b, b => c, c => a" << endl;

  int aux = a;
  a = c;
  c = b;
  b = aux;

  cout << "Los valores despues de la permutacion son: a = " << a << " b = " << b << " c = " << c << endl;
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
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
        cheap_tar = ((fin - 17) * 1) + (7 - debut) * 1;
        hour_1bs = cheap_tar;
        hour_2bs = exp_tar / 2;
      }
    }

    if(7 <= debut && debut <= 17){
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