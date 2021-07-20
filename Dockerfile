FROM gcc:latest
COPY . /user/src/cpp_test
WORKDIR /user/src/cpp_test
RUN g++ -std=c++17 hello.cpp -o hello
CMD [ "./hello" ]