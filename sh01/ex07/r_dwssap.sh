cat /etc/passwd | sed "s/#.*$//" | sed "/^\s*$/d" | sed "s/:.*$//" | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2"p | sed 's/$/, /' | xargs | sed 's/,$/./' | tr -d "\n"
