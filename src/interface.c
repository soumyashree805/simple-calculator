/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1 (void)
{
  GtkWidget *window1;
  GtkWidget *fixed1;
  GtkWidget *entry1;
  GtkWidget *bksp;
  GtkWidget *ce;
  GtkWidget *clr;
  GtkWidget *pm;
  GtkWidget *seven;
  GtkWidget *eight;
  GtkWidget *nine;
  GtkWidget *devide;
  GtkWidget *four;
  GtkWidget *five;
  GtkWidget *six;
  GtkWidget *mul;
  GtkWidget *one;
  GtkWidget *two;
  GtkWidget *three;
  GtkWidget *sub;
  GtkWidget *zero;
  GtkWidget *decimal;
  GtkWidget *equal;
  GtkWidget *add;

  window1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (window1), fixed1);

  entry1 = gtk_entry_new ();
  gtk_widget_show (entry1);
  gtk_fixed_put (GTK_FIXED (fixed1), entry1, 8, 8);
  gtk_widget_set_size_request (entry1, 472, 72);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry1), 8226);

  bksp = gtk_button_new_with_mnemonic (_("Bksp"));
  gtk_widget_show (bksp);
  gtk_fixed_put (GTK_FIXED (fixed1), bksp, 32, 128);
  gtk_widget_set_size_request (bksp, 70, 29);

  ce = gtk_button_new_with_mnemonic (_("CE"));
  gtk_widget_show (ce);
  gtk_fixed_put (GTK_FIXED (fixed1), ce, 136, 128);
  gtk_widget_set_size_request (ce, 69, 29);

  clr = gtk_button_new_with_mnemonic (_("CLR"));
  gtk_widget_show (clr);
  gtk_fixed_put (GTK_FIXED (fixed1), clr, 248, 128);
  gtk_widget_set_size_request (clr, 70, 29);

  pm = gtk_button_new_with_mnemonic (_("+/-"));
  gtk_widget_show (pm);
  gtk_fixed_put (GTK_FIXED (fixed1), pm, 352, 128);
  gtk_widget_set_size_request (pm, 69, 29);

  seven = gtk_button_new_with_mnemonic (_("7"));
  gtk_widget_show (seven);
  gtk_fixed_put (GTK_FIXED (fixed1), seven, 32, 184);
  gtk_widget_set_size_request (seven, 70, 29);

  eight = gtk_button_new_with_mnemonic (_("8"));
  gtk_widget_show (eight);
  gtk_fixed_put (GTK_FIXED (fixed1), eight, 136, 184);
  gtk_widget_set_size_request (eight, 70, 29);

  nine = gtk_button_new_with_mnemonic (_("9"));
  gtk_widget_show (nine);
  gtk_fixed_put (GTK_FIXED (fixed1), nine, 248, 184);
  gtk_widget_set_size_request (nine, 70, 29);

  devide = gtk_button_new_with_mnemonic (_("/"));
  gtk_widget_show (devide);
  gtk_fixed_put (GTK_FIXED (fixed1), devide, 352, 184);
  gtk_widget_set_size_request (devide, 69, 29);

  four = gtk_button_new_with_mnemonic (_("4"));
  gtk_widget_show (four);
  gtk_fixed_put (GTK_FIXED (fixed1), four, 32, 256);
  gtk_widget_set_size_request (four, 70, 29);

  five = gtk_button_new_with_mnemonic (_("5"));
  gtk_widget_show (five);
  gtk_fixed_put (GTK_FIXED (fixed1), five, 136, 256);
  gtk_widget_set_size_request (five, 79, 29);

  six = gtk_button_new_with_mnemonic (_("6"));
  gtk_widget_show (six);
  gtk_fixed_put (GTK_FIXED (fixed1), six, 248, 256);
  gtk_widget_set_size_request (six, 79, 29);

  mul = gtk_button_new_with_mnemonic (_("*"));
  gtk_widget_show (mul);
  gtk_fixed_put (GTK_FIXED (fixed1), mul, 352, 256);
  gtk_widget_set_size_request (mul, 78, 29);

  one = gtk_button_new_with_mnemonic (_("1"));
  gtk_widget_show (one);
  gtk_fixed_put (GTK_FIXED (fixed1), one, 32, 320);
  gtk_widget_set_size_request (one, 79, 29);

  two = gtk_button_new_with_mnemonic (_("2"));
  gtk_widget_show (two);
  gtk_fixed_put (GTK_FIXED (fixed1), two, 136, 320);
  gtk_widget_set_size_request (two, 78, 29);

  three = gtk_button_new_with_mnemonic (_("3"));
  gtk_widget_show (three);
  gtk_fixed_put (GTK_FIXED (fixed1), three, 248, 320);
  gtk_widget_set_size_request (three, 79, 29);

  sub = gtk_button_new_with_mnemonic (_("-"));
  gtk_widget_show (sub);
  gtk_fixed_put (GTK_FIXED (fixed1), sub, 352, 320);
  gtk_widget_set_size_request (sub, 79, 29);

  zero = gtk_button_new_with_mnemonic (_("0"));
  gtk_widget_show (zero);
  gtk_fixed_put (GTK_FIXED (fixed1), zero, 32, 384);
  gtk_widget_set_size_request (zero, 79, 29);

  decimal = gtk_button_new_with_mnemonic (_("."));
  gtk_widget_show (decimal);
  gtk_fixed_put (GTK_FIXED (fixed1), decimal, 136, 384);
  gtk_widget_set_size_request (decimal, 78, 29);

  equal = gtk_button_new_with_mnemonic (_("="));
  gtk_widget_show (equal);
  gtk_fixed_put (GTK_FIXED (fixed1), equal, 248, 384);
  gtk_widget_set_size_request (equal, 79, 29);

  add = gtk_button_new_with_mnemonic (_("+"));
  gtk_widget_show (add);
  gtk_fixed_put (GTK_FIXED (fixed1), add, 352, 384);
  gtk_widget_set_size_request (add, 78, 29);

  g_signal_connect ((gpointer) bksp, "clicked",
                    G_CALLBACK (on_bksp_clicked),
                    NULL);
  g_signal_connect ((gpointer) ce, "clicked",
                    G_CALLBACK (on_ce_clicked),
                    NULL);
  g_signal_connect ((gpointer) clr, "clicked",
                    G_CALLBACK (on_clr_clicked),
                    NULL);
  g_signal_connect ((gpointer) pm, "clicked",
                    G_CALLBACK (on_pm_clicked),
                    NULL);
  g_signal_connect ((gpointer) seven, "clicked",
                    G_CALLBACK (on_seven_clicked),
                    NULL);
  g_signal_connect ((gpointer) eight, "clicked",
                    G_CALLBACK (on_eight_clicked),
                    NULL);
  g_signal_connect ((gpointer) nine, "clicked",
                    G_CALLBACK (on_nine_clicked),
                    NULL);
  g_signal_connect ((gpointer) devide, "clicked",
                    G_CALLBACK (on_devide_clicked),
                    NULL);
  g_signal_connect ((gpointer) four, "clicked",
                    G_CALLBACK (on_four_clicked),
                    NULL);
  g_signal_connect ((gpointer) five, "clicked",
                    G_CALLBACK (on_five_clicked),
                    NULL);
  g_signal_connect ((gpointer) six, "clicked",
                    G_CALLBACK (on_six_clicked),
                    NULL);
  g_signal_connect ((gpointer) mul, "clicked",
                    G_CALLBACK (on_mul_clicked),
                    NULL);
  g_signal_connect ((gpointer) one, "clicked",
                    G_CALLBACK (on_one_clicked),
                    NULL);
  g_signal_connect ((gpointer) two, "clicked",
                    G_CALLBACK (on_two_clicked),
                    NULL);
  g_signal_connect ((gpointer) three, "clicked",
                    G_CALLBACK (on_three_clicked),
                    NULL);
  g_signal_connect ((gpointer) sub, "clicked",
                    G_CALLBACK (on_sub_clicked),
                    NULL);
  g_signal_connect ((gpointer) zero, "clicked",
                    G_CALLBACK (on_zero_clicked),
                    NULL);
  g_signal_connect ((gpointer) decimal, "clicked",
                    G_CALLBACK (on_decimal_clicked),
                    NULL);
  g_signal_connect ((gpointer) equal, "clicked",
                    G_CALLBACK (on_equal_clicked),
                    NULL);
  g_signal_connect ((gpointer) add, "clicked",
                    G_CALLBACK (on_add_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1, window1, "window1");
  GLADE_HOOKUP_OBJECT (window1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1, entry1, "entry1");
  GLADE_HOOKUP_OBJECT (window1, bksp, "bksp");
  GLADE_HOOKUP_OBJECT (window1, ce, "ce");
  GLADE_HOOKUP_OBJECT (window1, clr, "clr");
  GLADE_HOOKUP_OBJECT (window1, pm, "pm");
  GLADE_HOOKUP_OBJECT (window1, seven, "seven");
  GLADE_HOOKUP_OBJECT (window1, eight, "eight");
  GLADE_HOOKUP_OBJECT (window1, nine, "nine");
  GLADE_HOOKUP_OBJECT (window1, devide, "devide");
  GLADE_HOOKUP_OBJECT (window1, four, "four");
  GLADE_HOOKUP_OBJECT (window1, five, "five");
  GLADE_HOOKUP_OBJECT (window1, six, "six");
  GLADE_HOOKUP_OBJECT (window1, mul, "mul");
  GLADE_HOOKUP_OBJECT (window1, one, "one");
  GLADE_HOOKUP_OBJECT (window1, two, "two");
  GLADE_HOOKUP_OBJECT (window1, three, "three");
  GLADE_HOOKUP_OBJECT (window1, sub, "sub");
  GLADE_HOOKUP_OBJECT (window1, zero, "zero");
  GLADE_HOOKUP_OBJECT (window1, decimal, "decimal");
  GLADE_HOOKUP_OBJECT (window1, equal, "equal");
  GLADE_HOOKUP_OBJECT (window1, add, "add");

  return window1;
}

