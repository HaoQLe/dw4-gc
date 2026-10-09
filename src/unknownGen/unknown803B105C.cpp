#include <unknownGen.h>
#include <meta/beNDMWItemAbilityChip.h>
#pragma push
#pragma auto_inline off
extern "C" {

}
extern "C" {
void *beNDMWItemAbilityChip_virtual68(int p0,int p1){
 reinterpret_cast<Meta::beNDMWItemAbilityChip *>((void *)p0)->_recNo=(int)(void *)(int)((unsigned int)p1&0x3FF);
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>((void *)p0)+16)=(unsigned char)(int)(void *)(int)(((unsigned int)p1>>10)&0x1);
 reinterpret_cast<Meta::beNDMWItemAbilityChip *>((void *)p0)->_kindNo=(int)(void *)(int)(((unsigned int)p1>>12)&0xF);
 return (void *)p0;
}
}
#pragma pop
