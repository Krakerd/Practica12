bool Strinit(char *s, char *t){
    bool resultado = true;
    int i = 0;
    while(resultado == true){
        if(s[i] != t[i]){
            resultado=false;
        }
        if(t[i] == '\0'){
            break;
        }
        i++;
    }
    return resultado;
}

char s[] = "holaCaracola";
char t[] = "hola";

void setup(){
    Serial.begin(9600);
    delay(10);
}

void loop(){
    Serial.print("String s: ");
    Serial.println(s);
    Serial.print("String t: ");
    Serial.println(t);
    Serial.print("resultado: ");
    bool res = Strinit(s,t);
    Serial.println(res);
}