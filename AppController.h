/* All Rights reserved */

#include <AppKit/AppKit.h>

@interface AppController : NSObject
{
  NSTimer *timer;

  id volL;
  id volR;
  id bassL;
  id bassR;
  id trebleL;
  id trebleR;
  id pcmL;
  id pcmR;
  id lineL;
  id lineR;
  id volLock;
  id volMute;
  id bassLock;
  id bassMute;
  id trebleLock;
  id trebleMute;
  id pcmLock;
  id pcmMute;
  id lineLock;
  id lineMute;
}
- (void) awakeFromNib;
- (void) setVolume: (id)sender;
@end
