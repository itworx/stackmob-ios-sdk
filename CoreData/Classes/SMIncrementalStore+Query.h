/*
 * Copyright 2012 StackMob
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "SMIncrementalStore.h"
#import "SMQuery.h"
#import "SMPredicate.h"

/**
 A category on <SMIncrementalStore> providing methods to translate fetch requests into instances of <SMQuery>.
 */
@interface SMIncrementalStore (Query)

/**
 Given a fetch request, returns the equivalent query to be sent to StackMob.
 
 @param fetchRequest The fetch request to be translated.
 @param error If an error occurs during the translation, it is placed here as an instance of `SMError`.
 
 @return An instance of `SMQuery` representing the received fetch request.
 */
- (SMQuery *)queryForFetchRequest:(NSFetchRequest *)fetchRequest
                            error:(NSError *__autoreleasing *)error;
/**
 Given a fetch request with a predicate, returns the equivalent query to be sent to StackMob.
 
 @param entityDescription The description of the entity to be translated.
 @param predicate The predicate to applied to the fetch request.
 @param error If an error occurs during the translation, it is placed here as an instance of `SMError`.
 
 @return An instance of `SMQuery` representing the received fetch request.
 */
- (SMQuery *)queryForEntity:(NSEntityDescription *)entityDescription
                  predicate:(NSPredicate *)predicate
                      error:(NSError *__autoreleasing *)error;


@end
