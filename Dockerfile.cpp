# ================
# BUILD STAGE
# ================
FROM docker.io/library/gcc:9.2.0 as build

ENV DEBIAN_FRONTEND noninteractive

RUN apt-get update && apt-get install -y apt-utils cmake libgtest-dev libboost-test-dev && rm -rf /var/lib/apt/lists/* 

WORKDIR /app
COPY . /app/

RUN cmake .
RUN make
RUN make test

# ================
# RUNTIME STAGE
# ================
FROM gcr.io/distroless/cc
WORKDIR /app

COPY --from=build --chown=nonroot:nonroot /app/hello /app/hello

USER nonroot:nonroot
CMD ["/app/hello"]
