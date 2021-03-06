//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBICCatalogCollection : NSObject
{
    NSArray *_imageCatalogs;
}

+ (id)collectionWithImageCatalogPaths:(id)arg1 results:(id)arg2;
@property(readonly) NSArray *imageCatalogs; // @synthesize imageCatalogs=_imageCatalogs;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)launchImageRepsWithName:(id)arg1 options:(id)arg2 populatingIssues:(id)arg3;
- (id)appIconSetRepsWithName:(id)arg1 options:(id)arg2 populatingIssues:(id)arg3;
- (id)iconSetRepsForCompilingWithOptions:(id)arg1 populatingIssues:(id)arg2;
- (id)imageSetRepsForCompilingWithOptions:(id)arg1 populatingIssues:(id)arg2;
- (id)multipartImageRepsForCompilingMultipartImagesOfClass:(Class)arg1 withImageName:(id)arg2 options:(id)arg3 populatingIssues:(id)arg4;
- (id)findEmptyPlaceholderForMultipartImageOfClass:(Class)arg1 withName:(id)arg2 error:(id *)arg3;
- (id)allMultipartImagesOfClass:(Class)arg1 withName:(id)arg2;
- (id)multipartImageRepsForCompilingMultipartImagesOfClass:(Class)arg1 imageFilter:(CDUnknownBlockType)arg2 options:(id)arg3 populatingIssues:(id)arg4;
@property(readonly) NSArray *absoluteImageCatalogPaths;
- (id)initWithImageCatalogs:(id)arg1;

@end