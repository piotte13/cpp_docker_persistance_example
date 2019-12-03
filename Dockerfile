FROM madduci/docker-cpp-env:latest

RUN mkdir project
WORKDIR /project

CMD ["mkdir -p build && cd build && cmake .. && make && ./docker_persistance_example"]
