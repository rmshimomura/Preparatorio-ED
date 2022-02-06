#include <stdio.h>

int main() {
    FILE *arquivo = fopen("teste.svg", "w");

    fprintf(arquivo, "<svg viewBox=\" 0 0 20 20 \" xmlns=\"http://www.w3.org/2000/svg\">  <!--COMENTÁRIO-->");

    fprintf(arquivo, "\n\t<rect x=\" 10 \" y=\" 10 \" width=\" 10 \" height=\" 10 \" stroke=\" black \" stroke-width=\" 1px \" fill=\" red \" opacity=\" 1 \"/>");

    fprintf(arquivo, "\n\t<line x1=\" 20 \" x2=\" 25 \" y1=\" 20 \" y2=\" 20 \" stroke=\" blue \" />");

    fprintf(arquivo, "\n\t<circle cx=\" 30 \" cy=\" 30 \" r=\" 5 \" stroke=\" green \" stroke-width=\" 2 \" fill=\" yellow \" opacity=\" 0.1 \"/>");

    fprintf(arquivo, "\n</svg>");

    fclose(arquivo);

    return 0;
}