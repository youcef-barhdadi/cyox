
#include "common.h"
#include "chunk.h"
#include "debug.h"


int main(int argc, const char* argv[]) {

    Chunk chunk;



      int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT,123);
  writeChunk(&chunk, constant,123); 


//   initChunk(&chunk);
//   writeChunk(&chunk, OP_RETURN);
    disassembleChunk(&chunk, "test chunk");

  freeChunk(&chunk);

}