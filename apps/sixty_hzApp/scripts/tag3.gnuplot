set ylabel 'TAG-3 Rate (Hz)'
set xlabel 'Time (Seconds)'
#set yrange [0:12]
plot '< $APP/sixty_hz/scripts/df_plot.pl 9' using 1:2 with lines
pause 2
reread
