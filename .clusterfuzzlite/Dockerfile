FROM gcr.io/oss-fuzz-base/base-builder:v1

COPY . $SRC/<project_name>
WORKDIR $SRC/<project_name>
COPY ./.clusterfuzzlite/build.sh $SRC/
