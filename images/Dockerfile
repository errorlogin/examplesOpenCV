FROM debian:12.1

RUN  apt-get update -y && \
  apt-get install -yq --no-install-recommends locales locales-all 

ENV LC_ALL ru_RU.UTF-8
ENV LANG ru_RU.UTF-8
ENV LANGUAGE ru_RU.UTF-8
ENV TZ Europe/Moscow
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt-get install -y build-essential gdb 

#создание пользователя
RUN adduser --disabled-password --gecos '' sdl
WORKDIR /home/sdl

#графическое окно Qt
RUN apt-get install -y qt6-base-dev

RUN apt-get install -y libopencv-dev

RUN apt-get install -y ocl-icd-opencl-dev opencl-clhpp-headers

# установка python
#ARG PYTHON_VERSION
#ENV PYTHON_VERSION=${PYTHON_VERSION:-3.11.4}
#WORKDIR /opt
#RUN apt-get install -y wget
#RUN wget -q https://www.python.org/ftp/python/$PYTHON_VERSION/Python-$PYTHON_VERSION.tgz  && \
#	tar -xf Python-$PYTHON_VERSION.tgz && \
#	cd Python-$PYTHON_VERSION   && \
#	./configure --enable-optimizations && \
#	make altinstall 
#
#ENV PATH $PATH:/opt/Python-$PYTHON_VERSION
#RUN apt-get install -y pip
#
#RUN update-alternatives --install /usr/bin/python3 python3 /opt/Python-$PYTHON_VERSION/python 1

RUN apt-get install -y git

#USER sdl


