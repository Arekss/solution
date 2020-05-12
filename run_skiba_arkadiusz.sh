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
 	if [[ -d "projekt" ]]
  	then
        cd projekt
  	fi
  	docker build -t konteneras:1.0 .
  	docker run -it konteneras:1.0
   ;;
esac
