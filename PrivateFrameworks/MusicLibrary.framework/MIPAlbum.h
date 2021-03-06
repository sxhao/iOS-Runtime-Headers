/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPArtist, NSString;

@interface MIPAlbum : PBCodable <NSCopying> {
    struct { 
        unsigned int storeId : 1; 
        unsigned int numDiscs : 1; 
        unsigned int numTracks : 1; 
        unsigned int userRating : 1; 
        unsigned int compilation : 1; 
    MIPArtist *_artist;
    NSString *_artworkId;
    BOOL _compilation;
    } _has;
    NSString *_name;
    int _numDiscs;
    int _numTracks;
    NSString *_sortName;
    long long _storeId;
    int _userRating;
}

@property(retain) MIPArtist * artist;
@property(retain) NSString * artworkId;
@property BOOL compilation;
@property(readonly) BOOL hasArtist;
@property(readonly) BOOL hasArtworkId;
@property BOOL hasCompilation;
@property(readonly) BOOL hasName;
@property BOOL hasNumDiscs;
@property BOOL hasNumTracks;
@property(readonly) BOOL hasSortName;
@property BOOL hasStoreId;
@property BOOL hasUserRating;
@property(retain) NSString * name;
@property int numDiscs;
@property int numTracks;
@property(retain) NSString * sortName;
@property long long storeId;
@property int userRating;

- (void).cxx_destruct;
- (id)artist;
- (id)artworkId;
- (BOOL)compilation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtist;
- (BOOL)hasArtworkId;
- (BOOL)hasCompilation;
- (BOOL)hasName;
- (BOOL)hasNumDiscs;
- (BOOL)hasNumTracks;
- (BOOL)hasSortName;
- (BOOL)hasStoreId;
- (BOOL)hasUserRating;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (int)numDiscs;
- (int)numTracks;
- (BOOL)readFrom:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtworkId:(id)arg1;
- (void)setCompilation:(BOOL)arg1;
- (void)setHasCompilation:(BOOL)arg1;
- (void)setHasNumDiscs:(BOOL)arg1;
- (void)setHasNumTracks:(BOOL)arg1;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setHasUserRating:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setNumDiscs:(int)arg1;
- (void)setNumTracks:(int)arg1;
- (void)setSortName:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (void)setUserRating:(int)arg1;
- (id)sortName;
- (long long)storeId;
- (int)userRating;
- (void)writeTo:(id)arg1;

@end
