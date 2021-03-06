/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSMutableDictionary, TLAccessQueue;

@interface TLAlertController : NSObject {
    NSMutableDictionary *_alertsBySoundIDs;
    TLAccessQueue *_alertsBySoundIDsAccessQueue;
}

@property(setter=_setAlertsBySoundIDs:,retain) NSMutableDictionary * _alertsBySoundIDs;
@property(setter=_setAlertsBySoundIDsAccessQueue:,retain) TLAccessQueue * _alertsBySoundIDsAccessQueue;
@property(readonly) BOOL _hasVibratorCapability;

+ (id)sharedAlertController;

- (id)_alertsBySoundIDs;
- (id)_alertsBySoundIDsAccessQueue;
- (void)_didReachTimeoutForSystemSound:(id)arg1;
- (BOOL)_hasVibratorCapability;
- (BOOL)_playAlert:(id)arg1 completionHandler:(id)arg2 targetQueue:(id)arg3;
- (void)_removeSoundID:(unsigned long)arg1 shouldStopSound:(BOOL)arg2 fireCompletionHandler:(BOOL)arg3;
- (void)_setAlertsBySoundIDs:(id)arg1;
- (void)_setAlertsBySoundIDsAccessQueue:(id)arg1;
- (unsigned long)_soundIDForAlert:(id)arg1;
- (void)_stopAlert:(id)arg1;
- (BOOL)_stopAllAlerts;
- (void)_systemSoundDidFinishPlaying:(unsigned long)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)stopAllAlerts;

@end
