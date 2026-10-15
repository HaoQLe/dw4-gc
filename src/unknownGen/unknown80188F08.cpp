#include <unknownGen.h>
#include <meta/igPhotoshopScript.h>
#pragma push
#pragma auto_inline off
extern "C" {
extern void *igImage_meta;
extern void *igSceneInfo_meta;
}
extern "C" {
void *igPhotoshopScript_virtual8C(){return igImage_meta;}
void *igPhotoshopScript_virtual7C(int p0,int p1){
 reinterpret_cast<Meta::igPhotoshopScript *>((void *)p0)->_sectionHandle=(int)(void *)p1;
 return (void *)0;
}
void igPhotoshopScript_virtual88(){}
int igPromoteAllAttrs_virtual7C(){return 1;}
void *igPromoteAllAttrs_virtual8C(){return igSceneInfo_meta;}
}
#pragma pop
