#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <GLFW/glfw3.h> // You might need to edit this include statement in order for it to suit your include path

void copyToClipboard(const char* str) {
    if (!glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW\n");
        return;
    }

    GLFWwindow* window = glfwCreateWindow(1, 1, "", NULL, NULL);
    if (!window) {
        fprintf(stderr, "Failed to create GLFW window\n");
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(window);
    glfwSetClipboardString(window, str);

    glfwDestroyWindow(window);
    glfwTerminate();
}


char* randomChar(){
  char* c = malloc(sizeof(char));
  *c = rand() % 94 + 33;
  return c;
}

int main(){ 
  srand(time(NULL));

  int length = 16;
  printf("\n\n Length: \t"); 
  if(scanf("%d", &length) != 1) length = 16;
  char password[length];

  for(int i = 0; i < length; i++){
    char* recievedChar = randomChar();
    password[i] = *recievedChar;
    free(recievedChar); 
  }
  password[length] = '\0';
  printf("\n\n\t");
  for (int i = 0; i < length; i++){
    printf("%c",password[i]);
  }
  printf("\n\n");

  copyToClipboard(password);

  return 0;
}
