//                                        lista
Serie array[1000];
Serie serie;
char objRemovidos[100][100]; //esse array sera util para exibir todos os arquivos apagados
int n;
int count;

void start()
{
    n = 0;
    int count;
}

void inserirInicio(char x[30])
{
    if (n < 1000)
    {
        for (int i = n; i > 0; i--)
        {
            array[i] = array[i - 1];
        }

        char aux3[60] = PREFIXO;
        strcat(aux3, x);
        
        char *html = ler_html(aux3);
        ler_serie(&serie, html);
        free(html);
        array[0] = serie;
        n++;
        
    }
}

void inserirFim(char x[30])
{
    if (n < 1000)
    {
        char aux3[60] = PREFIXO;
        strcat(aux3, x);

        char *html = ler_html(aux3);
        ler_serie(&serie, html);
        free(html);
        array[n] = serie;
        n++;
        
    }
}

void inserir(char x[30], int pos)
{
    if (!(n >= 1000 || pos < 0 || pos > n))
    {
        for (int i = n; i > pos; i--)
        {
            array[i] = array[i - 1];
        }
        char aux3[60] = PREFIXO;
        strcat(aux3, x);
        
        char *html = ler_html(aux3);
        ler_serie(&serie, html);
        free(html);
        array[pos] = serie;
        n++;
        
    }

}

void removerInicio()
{
    if (n != 0)
    {
        n--;
        for (int i = 0; i < n; i++)
        {
            array[i] = array[i + 1];
        }
    }
}

void removerFim()
{
    if (n != 0)
    {
        n--;
    }
}

void remover(int pos)
{
    if (!(n == 0 || pos < 0 || pos >= n))
    {
        n--;
        for (int i = pos; i < n; i++)
        {
            array[i] = array[i + 1];
        }
    }
}

void mostrar()
{
    for (int i = 0; i < count; i++)
    {
        printf("(R) ");
        for (int j = 0; objRemovidos[i][j] != '\0'; j++)
        {
            printf("%c", objRemovidos[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        print_serie(&array[i]);
    }
}
//fim dos comandos da lista