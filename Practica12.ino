
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

void setup(){

}

void loop(){

}