//
//  Scheduler.h
//  ExamDemo
//
//  Created by George She on 2018/6/8.
//  Copyright © 2018年 CMRead. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TaskInfo : NSObject
@property (nonatomic, assign) int taskId;
@property (nonatomic, assign) int nodeId;
@end

@interface Schedule : NSObject
-(int)clean;
-(int)registerNode:(int)nodeId;
-(int)unregisterNode:(int)nodeId;

-(int)addTask:(int)taskId withData:(int) data;
-(int)deleteTask:(int)taskId;

-(int)scheduleTask:(int)taskId;
-(int)queryTaskStatus:(NSArray<TaskInfo *> *)tasks;
@end
