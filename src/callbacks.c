#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
int checkprecedence(char );
	char x[100];
	int i=0;

void
on_bksp_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
	i--;
	x[i]='\0';
	gtk_entry_set_text(t1,x);
}


void
on_ce_clicked                          (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
	memset(x,'\0',sizeof(x));	
	i=0;
	printf("%s\n",x);
	gtk_entry_set_text(t1," ");
	gtk_widget_grab_focus(t1);
}


void
on_clr_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_pm_clicked                          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_seven_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='7';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_eight_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='8';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_nine_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='9';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_devide_clicked                      (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='/';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_four_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='4';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_five_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='5';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_six_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='6';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_mul_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='*';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_one_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='1';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_two_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='2';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_three_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='3';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_sub_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='-';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_zero_clicked                        (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='0';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_decimal_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='.';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}


void
on_equal_clicked                       (GtkButton       *button,
                                        gpointer         user_data)
{
	int j,k=-1,l=-1;
	int a,b,c;
	int stack[10];

	char opd[100],opr[100];
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");
	
	for(j=0;j<strlen(x);j++)
	{	
		if(x[j] >='0' && x[j]<='9')
		{
			k++;
			opd[k]=x[j];
		}	
		else
		{
			if(l==-1)
			{
				l++;
				opr[l]=x[j];
			}
			else
			{
				a=checkprecedence(x[j]);
				b=checkprecedence(opr[l]);
				while(l>=0 && a<=b)
				{
					k++;
					opd[k]=opr[l];
					l--;
					if(l==-1)
						break;
					b=checkprecedence(opr[l]);
					
				}
				l++;
				opr[l]=x[j];
			}
		}
		
	}
	while(l>=0)
	{
			k++;
			opd[k]=opr[l];
			l--;
	}
	k++;
	opd[k]='\0';

	l=-1;
	for(j=0;j<k;j++)
	{
		if(opd[j]>='0' && opd[j]<='9')
		{
			l++;
			stack[l]=opd[j]-48;
		}
		else
		{
			b=stack[l];
			l--;
			a=stack[l];
			l--;
			if(opd[j]=='*')
				c=a*b;
			else
			if(opd[j]=='/')
				c=a/b;
			else
			if(opd[j]=='+')
				c=a+b;
			else
			if(opd[j]=='-')
				c=a-b;
		
		l++;
		stack[l]=c;
		}	
	}
	char y[10];
	sprintf(y,"%d",stack[l]);
	gtk_entry_set_text(t1,y);
}
int checkprecedence(char m )
{
		switch(m)
		{
			case '*':
			case '/':
			case '%':
				return 5;
			case '+':
			case '-':
				return 4;		
		}
}

void
on_add_clicked                         (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *t1;
	t1=lookup_widget(GTK_WIDGET(button),"entry1");

	x[i]='+';
	x[i+1]='\0';
	i++;
	gtk_entry_set_text(t1,x);
}
