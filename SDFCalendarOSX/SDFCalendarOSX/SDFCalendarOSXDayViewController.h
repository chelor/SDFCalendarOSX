//
//  The MIT License (MIT)
//
//  Copyright (c) 2014 shaydes.dsgn
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//
//  SDFCalendarOSXDayViewController.h
//  SDFCalendarOSX
//
//  Created by Trent Milton on 14/05/2014.
//  Copyright (c) 2014 shaydes.dsgn. All rights reserved.
//

@class SDFCalendarOSXDayViewController;

@protocol SDFCalendarOSXDaySelectionDelegate <NSObject>

- (void) sdfCalendarOSXDaySelected:(SDFCalendarOSXDayViewController *)dayViewController;

@end

@interface SDFCalendarOSXDayViewController : NSViewController

@property (nonatomic, weak) IBOutlet NSTextField *dayLabel;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) id <SDFCalendarOSXDaySelectionDelegate> delegate;
@property (nonatomic) BOOL currentMonth;

+ (void) setSelectedDayBackgroundColour:(NSColor *)colour;
+ (void) setTodayBackgroundColour:(NSColor *)colour;
+ (void) setCurrentMonthDayBackgroundColour:(NSColor *)colour;
+ (void) setCurrentMonthDayLabelColour:(NSColor *)colour;
+ (void) setNonCurrentMonthDayBackgroundColour:(NSColor *)colour;
+ (void) setNonCurrentMonthDayLabelColour:(NSColor *)colour;

#pragma mark - Public

- (void) select;
- (void) deselect;

@end
