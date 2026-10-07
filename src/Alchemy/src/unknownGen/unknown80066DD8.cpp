#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80056378();
void fn_80066D60(int,int,int);
}
extern "C" {
void fn_80066DD8(int p0,int p1){
 fn_80066D60(p0,p1,0);
}
void *fn_80066DFC(){return fn_80056378();}
}
#pragma pop
