//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPBTransitVehiclePosition, GEOPDAddress, GEOPDAddressObject, GEOPDAmenities, GEOPDAnnotatedItemList, GEOPDAssociatedApp, GEOPDBounds, GEOPDBrowseCategories, GEOPDBusinessClaim, GEOPDBusinessHours, GEOPDCaptionedPhoto, GEOPDContainedPlace, GEOPDETA, GEOPDEntity, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDHours, GEOPDIcon, GEOPDLinkedService, GEOPDLocationEvent, GEOPDMessageLink, GEOPDOfflineArea, GEOPDOfflineIdentifier, GEOPDOfflineQuadNodes, GEOPDOfflineSize, GEOPDOfflineUpdateManifest, GEOPDPhoto, GEOPDPlaceCollection, GEOPDPlaceInfo, GEOPDPlacecardLayoutConfiguration, GEOPDPlacecardURL, GEOPDPoiEvent, GEOPDPriceDescription, GEOPDPrototypeContainer, GEOPDQuickLink, GEOPDRap, GEOPDRating, GEOPDRawAttribute, GEOPDRelatedPlace, GEOPDRestaurantReservationLink, GEOPDResultSnippet, GEOPDReview, GEOPDRoadAccessInfo, GEOPDSimpleRestaurantMenuText, GEOPDSpatialLookupResult, GEOPDSupportsOfflineMaps, GEOPDTextBlock, GEOPDTip, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfo, GEOPDTransitInfoSnippet, GEOPDTransitSchedule, GEOPDTransitTripGeometry, GEOPDTransitTripStop, GEOPDTransitTripStopTime, GEOPDVenueInfo, GEOPDWifiFingerprint, GEOStyleAttributes, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponentValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDRoadAccessInfo *_accessInfo;
    GEOPDAddressObject *_addressObject;
    GEOPDAddress *_address;
    GEOPDAmenities *_amenities;
    GEOPDAnnotatedItemList *_annotatedItemList;
    GEOPDAssociatedApp *_associatedApp;
    GEOPDBounds *_bounds;
    GEOPDBrowseCategories *_browseCategories;
    GEOPDBusinessClaim *_businessClaim;
    GEOPDBusinessHours *_businessHours;
    GEOPDCaptionedPhoto *_captionedPhoto;
    GEOPDContainedPlace *_containedPlace;
    GEOPDEntity *_entity;
    GEOPDETA *_eta;
    GEOPDExternalAction *_externalAction;
    GEOPDFactoid *_factoid;
    GEOPDFlyover *_flyover;
    GEOPDHours *_hours;
    GEOPDIcon *_icon;
    GEOPDLinkedService *_linkedService;
    GEOPDLocationEvent *_locationEvent;
    GEOPDMessageLink *_messageLink;
    GEOPDOfflineArea *_offlineArea;
    GEOPDOfflineIdentifier *_offlineIdentifier;
    GEOPDOfflineQuadNodes *_offlineQuadNodes;
    GEOPDOfflineSize *_offlineSize;
    GEOPDPhoto *_photo;
    GEOPDPlaceCollection *_placeCollection;
    GEOPDPlaceInfo *_placeInfo;
    GEOPDPlacecardLayoutConfiguration *_placecardLayoutConfiguration;
    GEOPDPlacecardURL *_placecardUrl;
    GEOPDPoiEvent *_poiEvent;
    GEOPDPriceDescription *_priceDescription;
    GEOPDPrototypeContainer *_prototypeContainer;
    GEOPDQuickLink *_quickLink;
    GEOPDRap *_rap;
    GEOPDRating *_rating;
    GEOPDRawAttribute *_rawAttribute;
    GEOPDRelatedPlace *_relatedPlace;
    GEOPDRestaurantReservationLink *_restaurantReservationLink;
    GEOPDResultSnippet *_resultSnippet;
    GEOPDReview *_review;
    GEOPDSimpleRestaurantMenuText *_simpleRestaurantMenuText;
    GEOPDSpatialLookupResult *_spatialLookupResult;
    GEOStyleAttributes *_styleAttributes;
    GEOPDSupportsOfflineMaps *_supportsOfflineMaps;
    GEOPDTextBlock *_textBlock;
    GEOPDTip *_tip;
    GEOPDTransitAttribution *_transitAttribution;
    GEOPDTransitIncident *_transitIncident;
    GEOPDTransitInfoSnippet *_transitInfoSnippet;
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitSchedule *_transitSchedule;
    GEOPDTransitTripGeometry *_transitTripGeometry;
    GEOPDTransitTripStopTime *_transitTripStopTime;
    GEOPDTransitTripStop *_transitTripStop;
    GEOPBTransitVehiclePosition *_transitVehiclePosition;
    GEOPDOfflineUpdateManifest *_updateManifest;
    GEOPDVenueInfo *_venueInfo;
    GEOPDWifiFingerprint *_wifiFingerprint;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDTransitTripGeometry *transitTripGeometry;
@property(readonly, nonatomic) BOOL hasTransitTripGeometry;
@property(retain, nonatomic) GEOPDTransitTripStopTime *transitTripStopTime;
@property(readonly, nonatomic) BOOL hasTransitTripStopTime;
@property(retain, nonatomic) GEOPDTransitTripStop *transitTripStop;
@property(readonly, nonatomic) BOOL hasTransitTripStop;
@property(retain, nonatomic) GEOPDRelatedPlace *relatedPlace;
@property(readonly, nonatomic) BOOL hasRelatedPlace;
@property(retain, nonatomic) GEOPDPlaceCollection *placeCollection;
@property(readonly, nonatomic) BOOL hasPlaceCollection;
@property(retain, nonatomic) GEOPDBusinessHours *businessHours;
@property(readonly, nonatomic) BOOL hasBusinessHours;
@property(retain, nonatomic) GEOPDLinkedService *linkedService;
@property(readonly, nonatomic) BOOL hasLinkedService;
@property(retain, nonatomic) GEOPBTransitVehiclePosition *transitVehiclePosition;
@property(readonly, nonatomic) BOOL hasTransitVehiclePosition;
@property(retain, nonatomic) GEOPDPrototypeContainer *prototypeContainer;
@property(readonly, nonatomic) BOOL hasPrototypeContainer;
@property(retain, nonatomic) GEOPDPlacecardLayoutConfiguration *placecardLayoutConfiguration;
@property(readonly, nonatomic) BOOL hasPlacecardLayoutConfiguration;
@property(retain, nonatomic) GEOPDPoiEvent *poiEvent;
@property(readonly, nonatomic) BOOL hasPoiEvent;
@property(retain, nonatomic) GEOPDAnnotatedItemList *annotatedItemList;
@property(readonly, nonatomic) BOOL hasAnnotatedItemList;
@property(retain, nonatomic) GEOPDBrowseCategories *browseCategories;
@property(readonly, nonatomic) BOOL hasBrowseCategories;
@property(retain, nonatomic) GEOPDPriceDescription *priceDescription;
@property(readonly, nonatomic) BOOL hasPriceDescription;
@property(retain, nonatomic) GEOPDIcon *icon;
@property(readonly, nonatomic) BOOL hasIcon;
@property(retain, nonatomic) GEOPDWifiFingerprint *wifiFingerprint;
@property(readonly, nonatomic) BOOL hasWifiFingerprint;
@property(retain, nonatomic) GEOPDContainedPlace *containedPlace;
@property(readonly, nonatomic) BOOL hasContainedPlace;
@property(retain, nonatomic) GEOPDOfflineUpdateManifest *updateManifest;
@property(readonly, nonatomic) BOOL hasUpdateManifest;
@property(retain, nonatomic) GEOPDVenueInfo *venueInfo;
@property(readonly, nonatomic) BOOL hasVenueInfo;
@property(retain, nonatomic) GEOPDOfflineSize *offlineSize;
@property(readonly, nonatomic) BOOL hasOfflineSize;
@property(retain, nonatomic) GEOPDOfflineQuadNodes *offlineQuadNodes;
@property(readonly, nonatomic) BOOL hasOfflineQuadNodes;
@property(retain, nonatomic) GEOPDOfflineIdentifier *offlineIdentifier;
@property(readonly, nonatomic) BOOL hasOfflineIdentifier;
@property(retain, nonatomic) GEOPDSupportsOfflineMaps *supportsOfflineMaps;
@property(readonly, nonatomic) BOOL hasSupportsOfflineMaps;
@property(retain, nonatomic) GEOPDLocationEvent *locationEvent;
@property(readonly, nonatomic) BOOL hasLocationEvent;
@property(retain, nonatomic) GEOPDOfflineArea *offlineArea;
@property(readonly, nonatomic) BOOL hasOfflineArea;
@property(retain, nonatomic) GEOPDRap *rap;
@property(readonly, nonatomic) BOOL hasRap;
@property(retain, nonatomic) GEOPDQuickLink *quickLink;
@property(readonly, nonatomic) BOOL hasQuickLink;
@property(retain, nonatomic) GEOPDMessageLink *messageLink;
@property(readonly, nonatomic) BOOL hasMessageLink;
@property(retain, nonatomic) GEOPDAssociatedApp *associatedApp;
@property(readonly, nonatomic) BOOL hasAssociatedApp;
@property(retain, nonatomic) GEOPDPlacecardURL *placecardUrl;
@property(readonly, nonatomic) BOOL hasPlacecardUrl;
@property(retain, nonatomic) GEOPDTip *tip;
@property(readonly, nonatomic) BOOL hasTip;
@property(retain, nonatomic) GEOPDSpatialLookupResult *spatialLookupResult;
@property(readonly, nonatomic) BOOL hasSpatialLookupResult;
@property(retain, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink;
@property(readonly, nonatomic) BOOL hasRestaurantReservationLink;
@property(retain, nonatomic) GEOPDSimpleRestaurantMenuText *simpleRestaurantMenuText;
@property(readonly, nonatomic) BOOL hasSimpleRestaurantMenuText;
@property(retain, nonatomic) GEOPDAddressObject *addressObject;
@property(readonly, nonatomic) BOOL hasAddressObject;
@property(retain, nonatomic) GEOPDResultSnippet *resultSnippet;
@property(readonly, nonatomic) BOOL hasResultSnippet;
@property(retain, nonatomic) GEOPDExternalAction *externalAction;
@property(readonly, nonatomic) BOOL hasExternalAction;
@property(retain, nonatomic) GEOPDTransitInfoSnippet *transitInfoSnippet;
@property(readonly, nonatomic) BOOL hasTransitInfoSnippet;
@property(retain, nonatomic) GEOPDCaptionedPhoto *captionedPhoto;
@property(readonly, nonatomic) BOOL hasCaptionedPhoto;
@property(retain, nonatomic) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic) BOOL hasBusinessClaim;
@property(retain, nonatomic) GEOPDTransitAttribution *transitAttribution;
@property(readonly, nonatomic) BOOL hasTransitAttribution;
@property(retain, nonatomic) GEOPDFactoid *factoid;
@property(readonly, nonatomic) BOOL hasFactoid;
@property(retain, nonatomic) GEOPDTextBlock *textBlock;
@property(readonly, nonatomic) BOOL hasTextBlock;
@property(retain, nonatomic) GEOPDTransitIncident *transitIncident;
@property(readonly, nonatomic) BOOL hasTransitIncident;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
@property(retain, nonatomic) GEOPDAmenities *amenities;
@property(readonly, nonatomic) BOOL hasAmenities;
@property(retain, nonatomic) GEOPDRawAttribute *rawAttribute;
@property(readonly, nonatomic) BOOL hasRawAttribute;
@property(retain, nonatomic) GEOPDFlyover *flyover;
@property(readonly, nonatomic) BOOL hasFlyover;
@property(retain, nonatomic) GEOPDETA *eta;
@property(readonly, nonatomic) BOOL hasEta;
@property(retain, nonatomic) GEOPDTransitSchedule *transitSchedule;
@property(readonly, nonatomic) BOOL hasTransitSchedule;
@property(retain, nonatomic) GEOPDTransitInfo *transitInfo;
@property(readonly, nonatomic) BOOL hasTransitInfo;
@property(retain, nonatomic) GEOPDHours *hours;
@property(readonly, nonatomic) BOOL hasHours;
@property(retain, nonatomic) GEOPDPhoto *photo;
@property(readonly, nonatomic) BOOL hasPhoto;
@property(retain, nonatomic) GEOPDReview *review;
@property(readonly, nonatomic) BOOL hasReview;
@property(retain, nonatomic) GEOPDRating *rating;
@property(readonly, nonatomic) BOOL hasRating;
@property(retain, nonatomic) GEOPDAddress *address;
@property(readonly, nonatomic) BOOL hasAddress;
@property(retain, nonatomic) GEOPDBounds *bounds;
@property(readonly, nonatomic) BOOL hasBounds;
@property(retain, nonatomic) GEOPDRoadAccessInfo *accessInfo;
@property(readonly, nonatomic) BOOL hasAccessInfo;
@property(retain, nonatomic) GEOPDPlaceInfo *placeInfo;
@property(readonly, nonatomic) BOOL hasPlaceInfo;
@property(retain, nonatomic) GEOPDEntity *entity;
@property(readonly, nonatomic) BOOL hasEntity;

@end

