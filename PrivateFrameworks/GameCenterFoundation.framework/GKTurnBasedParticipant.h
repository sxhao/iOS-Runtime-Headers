/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKPlayer, GKTurnBasedParticipantInternal, NSDate, NSString;

@interface GKTurnBasedParticipant : NSObject {
    GKTurnBasedParticipantInternal *_internal;
}

@property(retain,readonly) GKTurnBasedParticipantInternal * internal;
@property(readonly) NSString * inviteMessage;
@property(readonly) GKPlayer * invitedBy;
@property(readonly) BOOL isLocalPlayer;
@property(readonly) BOOL isWinner;
@property(copy) NSDate * lastTurnDate;
@property int matchOutcome;
@property(readonly) NSString * matchOutcomeString;
@property(readonly) NSString * matchStatusString;
@property(retain,readonly) GKPlayer * player;
@property(copy,readonly) NSString * playerID;
@property(readonly) int status;
@property(copy) NSDate * timeoutDate;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (id)keyPathsForValuesAffectingStatus;
+ (BOOL)matchOutcomeIsValidForDoneState:(int)arg1;
+ (id)stringForMatchOutcome:(int)arg1;

- (id)basicMatchOutcomeString;
- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (id)invitedBy;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocalPlayer;
- (BOOL)isWinner;
- (id)lastTurnDate;
- (id)matchOutcomeString;
- (id)matchStatusString;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (id)playerID;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setStatus:(int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (int)status;
- (id)valueForUndefinedKey:(id)arg1;

@end