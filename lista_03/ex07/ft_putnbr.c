#include <unistd.h>

void ft_putnbr(int nb);
void ft_putchar(char c);
void printmaxint(void);

void ft_putnbr(int nb){
	if (nb == -2147483648)
	{
		printmaxint();
	}
	else{
		if(nb<0)
		{
			nb *=-1; 
			ft_putchar('-');
		}
		if(nb<10){
			ft_putchar(nb+'0');
		}else{
			ft_putnbr(nb/10);
			ft_putnbr(nb%10);
		}

	}
}



void ft_putchar(char c){
	write(1,&c,1);
}

void printmaxint(void){
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

int main(){
	ft_putnbr(-32);
	return 0;
}