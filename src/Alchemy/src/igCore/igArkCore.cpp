#include <igCore/igCoreAll.h>
#include <igGap.h>   

namespace Gap{
    namespace Core{

        void igArkCore::checkAlchemyVersion(igInt alchemyVersion){

            // The version-mismatch gate is at 0x79; the surrounding fields remain unrecovered.
            if(alchemyVersion != IG_ALCHEMY_VERSION &&
               reinterpret_cast<const igBool*>(_unknown16)[0x79 - 0x16] == true){
                IG_PRIVATE_REPORT_ERROR((
                "The headers used to build the Alchemy Core (version %d) do not match the currently registring dll or application (version %d).\n"
                "This usually means some API changed and you are likely to get unexpected behaviour.\n"
                "To try and load the dll or application anyways, try putting \nfailOnDllVersionMismatch = false in the CORE section of your alchemy.ini",
                IG_ALCHEMY_VERSION, alchemyVersion));
            }
        }

        igArkCore::igArkCore(){
            _unknown14 = 0;
            _preExitStarted = false;
            _unknown16[0] = 0;
            _isBootstrapped = false;
            // Word and byte writes are known; meanings of this storage remain unrecovered.
            reinterpret_cast<igInt*>(_unknown16 + 0x18 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x30 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x20 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x24 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x28 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x2C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x38 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x44 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x48 - 0x16)[0] = 0;
            _unknown16[0x74 - 0x16] = 0;
            _unknown16[0x75 - 0x16] = 0;
            _unknown16[0x76 - 0x16] = 0;
            _unknown16[0x77 - 0x16] = 0;
            _unknown16[0x78 - 0x16] = 0;
            _unknown16[0x79 - 0x16] = 0;
            _unknown16[0x7A - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x7C - 0x16)[0] = 0x80000;
            reinterpret_cast<igInt*>(_unknown16 + 0x80 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x84 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x88 - 0x16)[0] = -1;
            reinterpret_cast<igInt*>(_unknown16 + 0x8C - 0x16)[0] = -1;
            _unknown16[0x90 - 0x16] = 0;
            _unknown16[0x110 - 0x16] = 0;
            _unknown16[0x190 - 0x16] = 0;
            _unknown16[0x210 - 0x16] = 0;
            _unknown16[0x310 - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x50 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x54 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x34 - 0x16)[0] = 0;
            _unknown16[0x5C - 0x16] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x60 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x58 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x64 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x68 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x3C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x394 - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x4C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x6C - 0x16)[0] = 0;
            reinterpret_cast<igInt*>(_unknown16 + 0x70 - 0x16)[0] = 0;
        }

    }
}
