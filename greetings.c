//WAP to asks the user to press 'i' to print "Namaste" and press 'f' for "Bonjour"...
void namaste();         //Function declaraion/prototype
void bonjour();

int main(){                 //Function call
    char a;
    printf("Press 'I' for Indian and 'F' for French: ");        //Asks the user for their native country
    scanf("%c", &a);
    if(a == 'I'){                    //If is used for Indian
        namaste();
    } else{                          //else is used for French
        bonjour();
    }
    return 0;
}

void namaste(){                     //Funciton definition
    printf("Namaste \n");
}
void bonjour(){
    printf("Bonjour \n");
}
