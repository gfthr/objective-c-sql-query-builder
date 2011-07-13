/*
 * Copyright 2011 Ziminji
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 * 
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define ZIMSqlTokenError						@"ERROR"
#define ZIMSqlTokenHexadecimal					@"HEXADECIMAL"
#define ZIMSqlTokenIdentifier					@"IDENTIFIER"
#define ZIMSqlTokenInteger						@"INTEGER"
#define ZIMSqlTokenLiteral						@"LITERAL"
#define ZIMSqlTokenOperator						@"OPERATOR"
#define ZIMSqlTokenParameter					@"PARAMETER"
#define ZIMSqlTokenReal							@"REAL"
#define ZIMSqlTokenTerminal						@"TERMINAL"
#define ZIMSqlTokenWhitespace					@"WHITESPACE"

/*!
 @class					ZIMSqlTokenizer
 @discussion			This class tokenizes an SQL statement.
 @updated				2011-07-13
 @see					http://www.opensource.apple.com/source/SQLite/SQLite-74/public_source/src/complete.c
 */
@interface ZIMSqlTokenizer : NSObject <NSFastEnumeration> {

	@protected
		NSMutableArray *_tuples;

}
/*!
 @method				initWithSqlStatement:
 @discussion			This method initialize the class with the specified SQL statement.
 @param statement		The SQL statement to be tokenized.
 @return				An instance of this class.
 @updated				2011-07-13
 */
- (id) initWithSqlStatement: (NSString *)statement;

/*!
 @method				objectAtIndex:
 @discussion			This method returns the object located at index.
 @param index			An index within the bounds of the array.
 @return				A dictionary representing the tuple.
 @updated				2011-07-13
 */
- (id) objectAtIndex: (NSUInteger)index;

/*!
 @method				count
 @discussion			This method returns the number of objects currently in the array.
 @return				The number of objects currently in the array.
 @updated				2011-07-13
 */
- (NSUInteger) count;

@end