## Ehh.. What is that?
This is a simple c++ program that will output some text file to the folder `./artifacts`
from a docker container.  The motivation is to demonstrate a simple solution to persistant data
using Docker.

## Usage
First, build an image from the Dockerfile in the current directory and tag the image.
Note that the Dockerfile does not copy the source code, therefore **you do not need to rebuild the image
every time there's a change to the source code**!
```bash
$ git clone https://github.com/piotte13/cpp_docker_persistance_exemple.git
$ cd cpp_docker_persistance_exemple

$ docker build -t docker_persistance_exemple .
```


Then, every time you want to run the program, run this command.  The source code will be mounted to 
the docker container and the output files will be directly be sent to the host system.
```bash
docker run --rm -it -v $(pwd):/project docker_persistance_exemple
```