#!/bin/bash

case "$1" in
   "clone")
	 git clone https://github.com/Arekss/projekt.git
   ;;
   "clean")
	 sudo rm -Rf projekt
	 sudo rm -Rf updatedScript
   ;;
   "update")
	 git clone https://github.com/Arekss/updatedScript.git
   ;;
  "run")
 	if [[ -d "solution" ]]
  	then
        cd solution
  	fi
  	docker build -t kontenerrr:1.0 .
  	docker run -it kontenerrr:1.0
	docker stop kontenerrr:1.0
   ;;
esac
