#ifdef __unix__
#include <stdio.h>
#endif

#include "PrintTypesAsASN1.h"

#ifdef __linux__
#include <pthread.h>

static pthread_mutex_t g_printing_mutex = PTHREAD_MUTEX_INITIALIZER;

#endif

void PrintASN1Wrappers_Matrix3d(const char *paramName, const asn1SccWrappers_Matrix3d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Matrix3d ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i1;
        printf("{");
        for(i1=0; i1<(*pData).data.nCount; i1++) {
            if (i1) 
                printf(",");
            printf("%f", (*pData).data.arr[i1]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_NamedVector_base_Wrench_m(const char *paramName, const asn1SccBase_NamedVector_base_Wrench_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-NamedVector-base-Wrench-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i2;
        printf("{");
        for(i2=0; i2<(*pData).names.nCount; i2++) {
            if (i2) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i2].nCount; i++)
                    printf("%02x", (*pData).names.arr[i2].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i3;
        printf("{");
        for(i3=0; i3<(*pData).elements.nCount; i3++) {
            if (i3) 
                printf(",");
            printf("{");
            printf("force ");
            printf("{");
            printf("data ");
            {
                int i4;
                printf("{");
                for(i4=0; i4<(*pData).elements.arr[i3].force.data.nCount; i4++) {
                    if (i4) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i3].force.data.arr[i4]);
                }
                printf("}");
            }
            printf("}");
            printf(", ");
            printf("torque ");
            printf("{");
            printf("data ");
            {
                int i5;
                printf("{");
                for(i5=0; i5<(*pData).elements.arr[i3].torque.data.nCount; i5++) {
                    if (i5) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i3].torque.data.arr[i5]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_TransformWithCovariance(const char *paramName, const asn1SccBase_TransformWithCovariance *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-TransformWithCovariance ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("translation ");
    printf("{");
    printf("data ");
    {
        int i6;
        printf("{");
        for(i6=0; i6<(*pData).translation.data.nCount; i6++) {
            if (i6) 
                printf(",");
            printf("%f", (*pData).translation.data.arr[i6]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("{");
    printf("im ");
    {
        int i7;
        printf("{");
        for(i7=0; i7<(*pData).orientation.im.nCount; i7++) {
            if (i7) 
                printf(",");
            printf("%f", (*pData).orientation.im.arr[i7]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).orientation.re);
    printf("}");
    printf(", ");
    printf("cov ");
    printf("{");
    printf("data ");
    {
        int i8;
        printf("{");
        for(i8=0; i8<(*pData).cov.data.nCount; i8++) {
            if (i8) 
                printf(",");
            printf("%f", (*pData).cov.data.arr[i8]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Pose_m(const char *paramName, const asn1SccBase_Pose_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Pose-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("position ");
    printf("{");
    printf("data ");
    {
        int i9;
        printf("{");
        for(i9=0; i9<(*pData).position.data.nCount; i9++) {
            if (i9) 
                printf(",");
            printf("%f", (*pData).position.data.arr[i9]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("{");
    printf("im ");
    {
        int i10;
        printf("{");
        for(i10=0; i10<(*pData).orientation.im.nCount; i10++) {
            if (i10) 
                printf(",");
            printf("%f", (*pData).orientation.im.arr[i10]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).orientation.re);
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Pose2D(const char *paramName, const asn1SccBase_Pose2D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Pose2D ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("position ");
    printf("{");
    printf("data ");
    {
        int i11;
        printf("{");
        for(i11=0; i11<(*pData).position.data.nCount; i11++) {
            if (i11) 
                printf(",");
            printf("%f", (*pData).position.data.arr[i11]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("%f", (*pData).orientation);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Time_Resolution(const char *paramName, const asn1SccBase_Time_Resolution *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Time-Resolution ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-time-resolution-microseconds");
        break;
    case 1:
        printf("base-time-resolution-milliseconds");
        break;
    case 2:
        printf("base-time-resolution-seconds");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_geometry_Spline(const char *paramName, const asn1SccWrappers_geometry_Spline *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-geometry-Spline ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("geometric-resolution ");
    printf("%f", (*pData).geometric_resolution);
    printf(", ");
    printf("dimension ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).dimension);
    #else
    printf("%d", (*pData).dimension);
    #endif
    printf(", ");
    printf("curve-order ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).curve_order);
    #else
    printf("%d", (*pData).curve_order);
    #endif
    printf(", ");
    printf("kind ");
    switch((*pData).kind) {
    case 0:
        printf("wrappers-geometry-splinetype-degenerate");
        break;
    case 1:
        printf("wrappers-geometry-splinetype-polynomial-bezier");
        break;
    case 2:
        printf("wrappers-geometry-splinetype-polynomial-bspline");
        break;
    case 3:
        printf("wrappers-geometry-splinetype-rational-bezier");
        break;
    case 4:
        printf("wrappers-geometry-splinetype-rational-bspline");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).kind)");
    }
    printf(", ");
    printf("knots ");
    {
        int i12;
        printf("{");
        for(i12=0; i12<(*pData).knots.nCount; i12++) {
            if (i12) 
                printf(",");
            printf("%f", (*pData).knots.arr[i12]);
        }
        printf("}");
    }
    printf(", ");
    printf("vertices ");
    {
        int i13;
        printf("{");
        for(i13=0; i13<(*pData).vertices.nCount; i13++) {
            if (i13) 
                printf(",");
            printf("%f", (*pData).vertices.arr[i13]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Geometry_msgs_Point(const char *paramName, const asn1SccGeometry_msgs_Point *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Geometry-msgs-Point ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("x ");
    printf("%f", (*pData).x);
    printf(", ");
    printf("y ");
    printf("%f", (*pData).y);
    printf(", ");
    printf("z ");
    printf("%f", (*pData).z);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_commands_Joints(const char *paramName, const asn1SccBase_commands_Joints *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-commands-Joints ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i14;
        printf("{");
        for(i14=0; i14<(*pData).names.nCount; i14++) {
            if (i14) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i14].nCount; i++)
                    printf("%02x", (*pData).names.arr[i14].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i15;
        printf("{");
        for(i15=0; i15<(*pData).elements.nCount; i15++) {
            if (i15) 
                printf(",");
            printf("{");
            printf("position ");
            printf("%f", (*pData).elements.arr[i15].position);
            printf(", ");
            printf("speed ");
            printf("%f", (*pData).elements.arr[i15].speed);
            printf(", ");
            printf("effort ");
            printf("%f", (*pData).elements.arr[i15].effort);
            printf(", ");
            printf("raw ");
            printf("%f", (*pData).elements.arr[i15].raw);
            printf(", ");
            printf("acceleration ");
            printf("%f", (*pData).elements.arr[i15].acceleration);
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_frame_frame_status_t(const char *paramName, const asn1SccBase_samples_frame_frame_status_t *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-frame-frame-status-t ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-samples-frame-frame-status-t-status-empty");
        break;
    case 1:
        printf("base-samples-frame-frame-status-t-status-invalid");
        break;
    case 2:
        printf("base-samples-frame-frame-status-t-status-valid");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_Vector4d(const char *paramName, const asn1SccWrappers_Vector4d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Vector4d ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i16;
        printf("{");
        for(i16=0; i16<(*pData).data.nCount; i16++) {
            if (i16) 
                printf(",");
            printf("%f", (*pData).data.arr[i16]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_VectorXd(const char *paramName, const asn1SccWrappers_VectorXd *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-VectorXd ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i17;
        printf("{");
        for(i17=0; i17<(*pData).data.nCount; i17++) {
            if (i17) 
                printf(",");
            printf("%f", (*pData).data.arr[i17]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_NamedVector_Base_JointLimitRange(const char *paramName, const asn1SccBase_NamedVector_Base_JointLimitRange *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-NamedVector-Base-JointLimitRange ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i18;
        printf("{");
        for(i18=0; i18<(*pData).names.nCount; i18++) {
            if (i18) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i18].nCount; i++)
                    printf("%02x", (*pData).names.arr[i18].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i19;
        printf("{");
        for(i19=0; i19<(*pData).elements.nCount; i19++) {
            if (i19) 
                printf(",");
            printf("{");
            printf("min ");
            printf("{");
            printf("position ");
            printf("%f", (*pData).elements.arr[i19].min.position);
            printf(", ");
            printf("speed ");
            printf("%f", (*pData).elements.arr[i19].min.speed);
            printf(", ");
            printf("effort ");
            printf("%f", (*pData).elements.arr[i19].min.effort);
            printf(", ");
            printf("raw ");
            printf("%f", (*pData).elements.arr[i19].min.raw);
            printf(", ");
            printf("acceleration ");
            printf("%f", (*pData).elements.arr[i19].min.acceleration);
            printf("}");
            printf(", ");
            printf("max ");
            printf("{");
            printf("position ");
            printf("%f", (*pData).elements.arr[i19].max.position);
            printf(", ");
            printf("speed ");
            printf("%f", (*pData).elements.arr[i19].max.speed);
            printf(", ");
            printf("effort ");
            printf("%f", (*pData).elements.arr[i19].max.effort);
            printf(", ");
            printf("raw ");
            printf("%f", (*pData).elements.arr[i19].max.raw);
            printf(", ");
            printf("acceleration ");
            printf("%f", (*pData).elements.arr[i19].max.acceleration);
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Int16(const char *paramName, const asn1SccT_Int16 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-Int16 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Pointcloud_m(const char *paramName, const asn1SccBase_samples_Pointcloud_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Pointcloud-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("points ");
    {
        int i20;
        printf("{");
        for(i20=0; i20<(*pData).points.nCount; i20++) {
            if (i20) 
                printf(",");
            printf("{");
            printf("data ");
            {
                int i21;
                printf("{");
                for(i21=0; i21<(*pData).points.arr[i20].data.nCount; i21++) {
                    if (i21) 
                        printf(",");
                    printf("%f", (*pData).points.arr[i20].data.arr[i21]);
                }
                printf("}");
            }
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("colors ");
    {
        int i22;
        printf("{");
        for(i22=0; i22<(*pData).colors.nCount; i22++) {
            if (i22) 
                printf(",");
            printf("{");
            printf("data ");
            {
                int i23;
                printf("{");
                for(i23=0; i23<(*pData).colors.arr[i22].data.nCount; i23++) {
                    if (i23) 
                        printf(",");
                    printf("%f", (*pData).colors.arr[i22].data.arr[i23]);
                }
                printf("}");
            }
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Std_orogen_typekits_mtype_std_vector_base_Trajectory(const char *paramName, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Trajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Std-orogen-typekits-mtype-std-vector-base-Trajectory ::= ", paramName);
    printf("%s ", paramName);
    {
        int i24;
        printf("{");
        for(i24=0; i24<(*pData).nCount; i24++) {
            if (i24) 
                printf(",");
            printf("{");
            printf("speed ");
            printf("%f", (*pData).arr[i24].speed);
            printf(", ");
            printf("spline ");
            printf("{");
            printf("geometric-resolution ");
            printf("%f", (*pData).arr[i24].spline.geometric_resolution);
            printf(", ");
            printf("dimension ");
            #if WORD_SIZE==8
            printf("%lld", (*pData).arr[i24].spline.dimension);
            #else
            printf("%d", (*pData).arr[i24].spline.dimension);
            #endif
            printf(", ");
            printf("curve-order ");
            #if WORD_SIZE==8
            printf("%lld", (*pData).arr[i24].spline.curve_order);
            #else
            printf("%d", (*pData).arr[i24].spline.curve_order);
            #endif
            printf(", ");
            printf("kind ");
            switch((*pData).arr[i24].spline.kind) {
            case 0:
                printf("wrappers-geometry-splinetype-degenerate");
                break;
            case 1:
                printf("wrappers-geometry-splinetype-polynomial-bezier");
                break;
            case 2:
                printf("wrappers-geometry-splinetype-polynomial-bspline");
                break;
            case 3:
                printf("wrappers-geometry-splinetype-rational-bezier");
                break;
            case 4:
                printf("wrappers-geometry-splinetype-rational-bspline");
                break;
            default:
                printf("Invalid value in ENUMERATED ((*pData).arr[i24].spline.kind)");
            }
            printf(", ");
            printf("knots ");
            {
                int i25;
                printf("{");
                for(i25=0; i25<(*pData).arr[i24].spline.knots.nCount; i25++) {
                    if (i25) 
                        printf(",");
                    printf("%f", (*pData).arr[i24].spline.knots.arr[i25]);
                }
                printf("}");
            }
            printf(", ");
            printf("vertices ");
            {
                int i26;
                printf("{");
                for(i26=0; i26<(*pData).arr[i24].spline.vertices.nCount; i26++) {
                    if (i26) 
                        printf(",");
                    printf("%f", (*pData).arr[i24].spline.vertices.arr[i26]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointLimits(const char *paramName, const asn1SccBase_JointLimits *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointLimits ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i27;
        printf("{");
        for(i27=0; i27<(*pData).names.nCount; i27++) {
            if (i27) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i27].nCount; i++)
                    printf("%02x", (*pData).names.arr[i27].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i28;
        printf("{");
        for(i28=0; i28<(*pData).elements.nCount; i28++) {
            if (i28) 
                printf(",");
            printf("{");
            printf("min ");
            printf("{");
            printf("position ");
            printf("%f", (*pData).elements.arr[i28].min.position);
            printf(", ");
            printf("speed ");
            printf("%f", (*pData).elements.arr[i28].min.speed);
            printf(", ");
            printf("effort ");
            printf("%f", (*pData).elements.arr[i28].min.effort);
            printf(", ");
            printf("raw ");
            printf("%f", (*pData).elements.arr[i28].min.raw);
            printf(", ");
            printf("acceleration ");
            printf("%f", (*pData).elements.arr[i28].min.acceleration);
            printf("}");
            printf(", ");
            printf("max ");
            printf("{");
            printf("position ");
            printf("%f", (*pData).elements.arr[i28].max.position);
            printf(", ");
            printf("speed ");
            printf("%f", (*pData).elements.arr[i28].max.speed);
            printf(", ");
            printf("effort ");
            printf("%f", (*pData).elements.arr[i28].max.effort);
            printf(", ");
            printf("raw ");
            printf("%f", (*pData).elements.arr[i28].max.raw);
            printf(", ");
            printf("acceleration ");
            printf("%f", (*pData).elements.arr[i28].max.acceleration);
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_BodyState(const char *paramName, const asn1SccBase_samples_BodyState *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-BodyState ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("pose ");
    printf("{");
    printf("translation ");
    printf("{");
    printf("data ");
    {
        int i29;
        printf("{");
        for(i29=0; i29<(*pData).pose.translation.data.nCount; i29++) {
            if (i29) 
                printf(",");
            printf("%f", (*pData).pose.translation.data.arr[i29]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("{");
    printf("im ");
    {
        int i30;
        printf("{");
        for(i30=0; i30<(*pData).pose.orientation.im.nCount; i30++) {
            if (i30) 
                printf(",");
            printf("%f", (*pData).pose.orientation.im.arr[i30]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).pose.orientation.re);
    printf("}");
    printf(", ");
    printf("cov ");
    printf("{");
    printf("data ");
    {
        int i31;
        printf("{");
        for(i31=0; i31<(*pData).pose.cov.data.nCount; i31++) {
            if (i31) 
                printf(",");
            printf("%f", (*pData).pose.cov.data.arr[i31]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
    printf(", ");
    printf("velocity ");
    printf("{");
    printf("vel ");
    printf("{");
    printf("data ");
    {
        int i32;
        printf("{");
        for(i32=0; i32<(*pData).velocity.vel.data.nCount; i32++) {
            if (i32) 
                printf(",");
            printf("%f", (*pData).velocity.vel.data.arr[i32]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("rot ");
    printf("{");
    printf("data ");
    {
        int i33;
        printf("{");
        for(i33=0; i33<(*pData).velocity.rot.data.nCount; i33++) {
            if (i33) 
                printf(",");
            printf("%f", (*pData).velocity.rot.data.arr[i33]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov ");
    printf("{");
    printf("data ");
    {
        int i34;
        printf("{");
        for(i34=0; i34<(*pData).velocity.cov.data.nCount; i34++) {
            if (i34) 
                printf(",");
            printf("%f", (*pData).velocity.cov.data.arr[i34]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_RigidBodyState(const char *paramName, const asn1SccBase_samples_RigidBodyState *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-RigidBodyState ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("sourceframe ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).sourceframe.nCount; i++)
            printf("%02x", (*pData).sourceframe.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("targetframe ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).targetframe.nCount; i++)
            printf("%02x", (*pData).targetframe.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("position ");
    printf("{");
    printf("data ");
    {
        int i35;
        printf("{");
        for(i35=0; i35<(*pData).position.data.nCount; i35++) {
            if (i35) 
                printf(",");
            printf("%f", (*pData).position.data.arr[i35]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-position ");
    printf("{");
    printf("data ");
    {
        int i36;
        printf("{");
        for(i36=0; i36<(*pData).cov_position.data.nCount; i36++) {
            if (i36) 
                printf(",");
            printf("%f", (*pData).cov_position.data.arr[i36]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("{");
    printf("im ");
    {
        int i37;
        printf("{");
        for(i37=0; i37<(*pData).orientation.im.nCount; i37++) {
            if (i37) 
                printf(",");
            printf("%f", (*pData).orientation.im.arr[i37]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).orientation.re);
    printf("}");
    printf(", ");
    printf("cov-orientation ");
    printf("{");
    printf("data ");
    {
        int i38;
        printf("{");
        for(i38=0; i38<(*pData).cov_orientation.data.nCount; i38++) {
            if (i38) 
                printf(",");
            printf("%f", (*pData).cov_orientation.data.arr[i38]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("velocity ");
    printf("{");
    printf("data ");
    {
        int i39;
        printf("{");
        for(i39=0; i39<(*pData).velocity.data.nCount; i39++) {
            if (i39) 
                printf(",");
            printf("%f", (*pData).velocity.data.arr[i39]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-velocity ");
    printf("{");
    printf("data ");
    {
        int i40;
        printf("{");
        for(i40=0; i40<(*pData).cov_velocity.data.nCount; i40++) {
            if (i40) 
                printf(",");
            printf("%f", (*pData).cov_velocity.data.arr[i40]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("angular-velocity ");
    printf("{");
    printf("data ");
    {
        int i41;
        printf("{");
        for(i41=0; i41<(*pData).angular_velocity.data.nCount; i41++) {
            if (i41) 
                printf(",");
            printf("%f", (*pData).angular_velocity.data.arr[i41]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-angular-velocity ");
    printf("{");
    printf("data ");
    {
        int i42;
        printf("{");
        for(i42=0; i42<(*pData).cov_angular_velocity.data.nCount; i42++) {
            if (i42) 
                printf(",");
            printf("%f", (*pData).cov_angular_velocity.data.arr[i42]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Boolean(const char *paramName, const asn1SccT_Boolean *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-Boolean ::= ", paramName);
    printf("%s ", paramName);
    printf("%s", (int)(*pData)?"TRUE":"FALSE");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_RigidBodyAcceleration_m(const char *paramName, const asn1SccBase_samples_RigidBodyAcceleration_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-RigidBodyAcceleration-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("acceleration ");
    printf("{");
    printf("data ");
    {
        int i43;
        printf("{");
        for(i43=0; i43<(*pData).acceleration.data.nCount; i43++) {
            if (i43) 
                printf(",");
            printf("%f", (*pData).acceleration.data.arr[i43]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-acceleration ");
    printf("{");
    printf("data ");
    {
        int i44;
        printf("{");
        for(i44=0; i44<(*pData).cov_acceleration.data.nCount; i44++) {
            if (i44) 
                printf(",");
            printf("%f", (*pData).cov_acceleration.data.arr[i44]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("angular-acceleration ");
    printf("{");
    printf("data ");
    {
        int i45;
        printf("{");
        for(i45=0; i45<(*pData).angular_acceleration.data.nCount; i45++) {
            if (i45) 
                printf(",");
            printf("%f", (*pData).angular_acceleration.data.arr[i45]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-angular-acceleration ");
    printf("{");
    printf("data ");
    {
        int i46;
        printf("{");
        for(i46=0; i46<(*pData).cov_angular_acceleration.data.nCount; i46++) {
            if (i46) 
                printf(",");
            printf("%f", (*pData).cov_angular_acceleration.data.arr[i46]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_SonarBeam(const char *paramName, const asn1SccBase_samples_SonarBeam *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-SonarBeam ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("bearing ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).bearing.rad);
    printf("}");
    printf(", ");
    printf("sampling-interval ");
    printf("%f", (*pData).sampling_interval);
    printf(", ");
    printf("speed-of-sound ");
    printf("%f", (*pData).speed_of_sound);
    printf(", ");
    printf("beamwidth-horizontal ");
    printf("%f", (*pData).beamwidth_horizontal);
    printf(", ");
    printf("beamwidth-vertical ");
    printf("%f", (*pData).beamwidth_vertical);
    printf(", ");
    printf("beam ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).beam.nCount; i++)
            printf("%02x", (*pData).beam.arr[i]);
        printf("'H");
    }

    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointTransform_m(const char *paramName, const asn1SccBase_JointTransform_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointTransform-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("sourceframe ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).sourceframe.nCount; i++)
            printf("%02x", (*pData).sourceframe.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("targetframe ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).targetframe.nCount; i++)
            printf("%02x", (*pData).targetframe.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("rotationaxis ");
    printf("{");
    printf("data ");
    {
        int i47;
        printf("{");
        for(i47=0; i47<(*pData).rotationaxis.data.nCount; i47++) {
            if (i47) 
                printf(",");
            printf("%f", (*pData).rotationaxis.data.arr[i47]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointLimitRange(const char *paramName, const asn1SccBase_JointLimitRange *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointLimitRange ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("min ");
    printf("{");
    printf("position ");
    printf("%f", (*pData).min.position);
    printf(", ");
    printf("speed ");
    printf("%f", (*pData).min.speed);
    printf(", ");
    printf("effort ");
    printf("%f", (*pData).min.effort);
    printf(", ");
    printf("raw ");
    printf("%f", (*pData).min.raw);
    printf(", ");
    printf("acceleration ");
    printf("%f", (*pData).min.acceleration);
    printf("}");
    printf(", ");
    printf("max ");
    printf("{");
    printf("position ");
    printf("%f", (*pData).max.position);
    printf(", ");
    printf("speed ");
    printf("%f", (*pData).max.speed);
    printf(", ");
    printf("effort ");
    printf("%f", (*pData).max.effort);
    printf(", ");
    printf("raw ");
    printf("%f", (*pData).max.raw);
    printf(", ");
    printf("acceleration ");
    printf("%f", (*pData).max.acceleration);
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Std_vector_Wrappers_Vector4d(const char *paramName, const asn1SccStd_vector_Wrappers_Vector4d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Std-vector-Wrappers-Vector4d ::= ", paramName);
    printf("%s ", paramName);
    {
        int i48;
        printf("{");
        for(i48=0; i48<(*pData).nCount; i48++) {
            if (i48) 
                printf(",");
            printf("{");
            printf("data ");
            {
                int i49;
                printf("{");
                for(i49=0; i49<(*pData).arr[i48].data.nCount; i49++) {
                    if (i49) 
                        printf(",");
                    printf("%f", (*pData).arr[i48].data.arr[i49]);
                }
                printf("}");
            }
            printf("}");
        }
        printf("}");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Float(const char *paramName, const asn1SccT_Float *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-Float ::= ", paramName);
    printf("%s ", paramName);
    printf("%f", (*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Wrenches(const char *paramName, const asn1SccBase_samples_Wrenches *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Wrenches ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i50;
        printf("{");
        for(i50=0; i50<(*pData).names.nCount; i50++) {
            if (i50) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i50].nCount; i++)
                    printf("%02x", (*pData).names.arr[i50].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i51;
        printf("{");
        for(i51=0; i51<(*pData).elements.nCount; i51++) {
            if (i51) 
                printf(",");
            printf("{");
            printf("force ");
            printf("{");
            printf("data ");
            {
                int i52;
                printf("{");
                for(i52=0; i52<(*pData).elements.arr[i51].force.data.nCount; i52++) {
                    if (i52) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i51].force.data.arr[i52]);
                }
                printf("}");
            }
            printf("}");
            printf(", ");
            printf("torque ");
            printf("{");
            printf("data ");
            {
                int i53;
                printf("{");
                for(i53=0; i53<(*pData).elements.arr[i51].torque.data.nCount; i53++) {
                    if (i53) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i51].torque.data.arr[i53]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Geometry_msgs_Point32(const char *paramName, const asn1SccGeometry_msgs_Point32 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Geometry-msgs-Point32 ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("x ");
    printf("%f", (*pData).x);
    printf(", ");
    printf("y ");
    printf("%f", (*pData).y);
    printf(", ");
    printf("z ");
    printf("%f", (*pData).z);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Int8(const char *paramName, const asn1SccT_Int8 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-Int8 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Pressure(const char *paramName, const asn1SccBase_Pressure *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Pressure ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("pascal ");
    printf("%f", (*pData).pascal);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_DepthMap_DEPTH_MEASUREMENT_STATE(const char *paramName, const asn1SccBase_samples_DepthMap_DEPTH_MEASUREMENT_STATE *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-DepthMap-DEPTH-MEASUREMENT-STATE ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-samples-depthmap-depth-measurement-state-measurement-error");
        break;
    case 1:
        printf("base-samples-depthmap-depth-measurement-state-too-far");
        break;
    case 2:
        printf("base-samples-depthmap-depth-measurement-state-too-near");
        break;
    case 3:
        printf("base-samples-depthmap-depth-measurement-state-valid-measurement");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Wrench(const char *paramName, const asn1SccBase_samples_Wrench *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Wrench ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("force ");
    printf("{");
    printf("data ");
    {
        int i54;
        printf("{");
        for(i54=0; i54<(*pData).force.data.nCount; i54++) {
            if (i54) 
                printf(",");
            printf("%f", (*pData).force.data.arr[i54]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("torque ");
    printf("{");
    printf("data ");
    {
        int i55;
        printf("{");
        for(i55=0; i55<(*pData).torque.data.nCount; i55++) {
            if (i55) 
                printf(",");
            printf("%f", (*pData).torque.data.arr[i55]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_LaserScan(const char *paramName, const asn1SccBase_samples_LaserScan *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-LaserScan ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("start-angle ");
    printf("%f", (*pData).start_angle);
    printf(", ");
    printf("angular-resolution ");
    printf("%f", (*pData).angular_resolution);
    printf(", ");
    printf("speed ");
    printf("%f", (*pData).speed);
    printf(", ");
    printf("ranges ");
    {
        int i56;
        printf("{");
        for(i56=0; i56<(*pData).ranges.nCount; i56++) {
            if (i56) 
                printf(",");
            #if WORD_SIZE==8
            printf("%lld", (*pData).ranges.arr[i56]);
            #else
            printf("%d", (*pData).ranges.arr[i56]);
            #endif
        }
        printf("}");
    }
    printf(", ");
    printf("minrange ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).minrange);
    #else
    printf("%d", (*pData).minrange);
    #endif
    printf(", ");
    printf("maxrange ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).maxrange);
    #else
    printf("%d", (*pData).maxrange);
    #endif
    printf(", ");
    printf("remission ");
    {
        int i57;
        printf("{");
        for(i57=0; i57<(*pData).remission.nCount; i57++) {
            if (i57) 
                printf(",");
            printf("%f", (*pData).remission.arr[i57]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_MatrixXd(const char *paramName, const asn1SccWrappers_MatrixXd *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-MatrixXd ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("rows ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).rows);
    #else
    printf("%d", (*pData).rows);
    #endif
    printf(", ");
    printf("cols ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).cols);
    #else
    printf("%d", (*pData).cols);
    #endif
    printf(", ");
    printf("data ");
    {
        int i58;
        printf("{");
        for(i58=0; i58<(*pData).data.nCount; i58++) {
            if (i58) 
                printf(",");
            printf("%f", (*pData).data.arr[i58]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Pointcloud(const char *paramName, const asn1SccBase_samples_Pointcloud *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Pointcloud ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("points ");
    {
        int i59;
        printf("{");
        for(i59=0; i59<(*pData).points.nCount; i59++) {
            if (i59) 
                printf(",");
            printf("{");
            printf("data ");
            {
                int i60;
                printf("{");
                for(i60=0; i60<(*pData).points.arr[i59].data.nCount; i60++) {
                    if (i60) 
                        printf(",");
                    printf("%f", (*pData).points.arr[i59].data.arr[i60]);
                }
                printf("}");
            }
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("colors ");
    {
        int i61;
        printf("{");
        for(i61=0; i61<(*pData).colors.nCount; i61++) {
            if (i61) 
                printf(",");
            printf("{");
            printf("data ");
            {
                int i62;
                printf("{");
                for(i62=0; i62<(*pData).colors.arr[i61].data.nCount; i62++) {
                    if (i62) 
                        printf(",");
                    printf("%f", (*pData).colors.arr[i61].data.arr[i62]);
                }
                printf("}");
            }
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Wrench_m(const char *paramName, const asn1SccBase_samples_Wrench_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Wrench-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("force ");
    printf("{");
    printf("data ");
    {
        int i63;
        printf("{");
        for(i63=0; i63<(*pData).force.data.nCount; i63++) {
            if (i63) 
                printf(",");
            printf("%f", (*pData).force.data.arr[i63]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("torque ");
    printf("{");
    printf("data ");
    {
        int i64;
        printf("{");
        for(i64=0; i64<(*pData).torque.data.nCount; i64++) {
            if (i64) 
                printf(",");
            printf("%f", (*pData).torque.data.arr[i64]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_Vector2d(const char *paramName, const asn1SccWrappers_Vector2d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Vector2d ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i65;
        printf("{");
        for(i65=0; i65<(*pData).data.nCount; i65++) {
            if (i65) 
                printf(",");
            printf("%f", (*pData).data.arr[i65]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointState_MODE(const char *paramName, const asn1SccBase_JointState_MODE *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointState-MODE ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-jointstate-mode-acceleration");
        break;
    case 1:
        printf("base-jointstate-mode-effort");
        break;
    case 2:
        printf("base-jointstate-mode-position");
        break;
    case 3:
        printf("base-jointstate-mode-raw");
        break;
    case 4:
        printf("base-jointstate-mode-speed");
        break;
    case 5:
        printf("base-jointstate-mode-unset");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Trajectory_m(const char *paramName, const asn1SccBase_Trajectory_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Trajectory-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("speed ");
    printf("%f", (*pData).speed);
    printf(", ");
    printf("spline ");
    printf("{");
    printf("geometric-resolution ");
    printf("%f", (*pData).spline.geometric_resolution);
    printf(", ");
    printf("dimension ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).spline.dimension);
    #else
    printf("%d", (*pData).spline.dimension);
    #endif
    printf(", ");
    printf("curve-order ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).spline.curve_order);
    #else
    printf("%d", (*pData).spline.curve_order);
    #endif
    printf(", ");
    printf("kind ");
    switch((*pData).spline.kind) {
    case 0:
        printf("wrappers-geometry-splinetype-degenerate");
        break;
    case 1:
        printf("wrappers-geometry-splinetype-polynomial-bezier");
        break;
    case 2:
        printf("wrappers-geometry-splinetype-polynomial-bspline");
        break;
    case 3:
        printf("wrappers-geometry-splinetype-rational-bezier");
        break;
    case 4:
        printf("wrappers-geometry-splinetype-rational-bspline");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).spline.kind)");
    }
    printf(", ");
    printf("knots ");
    {
        int i66;
        printf("{");
        for(i66=0; i66<(*pData).spline.knots.nCount; i66++) {
            if (i66) 
                printf(",");
            printf("%f", (*pData).spline.knots.arr[i66]);
        }
        printf("}");
    }
    printf(", ");
    printf("vertices ");
    {
        int i67;
        printf("{");
        for(i67=0; i67<(*pData).spline.vertices.nCount; i67++) {
            if (i67) 
                printf(",");
            printf("%f", (*pData).spline.vertices.arr[i67]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Wrenches_m(const char *paramName, const asn1SccBase_samples_Wrenches_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Wrenches-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i68;
        printf("{");
        for(i68=0; i68<(*pData).names.nCount; i68++) {
            if (i68) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i68].nCount; i++)
                    printf("%02x", (*pData).names.arr[i68].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i69;
        printf("{");
        for(i69=0; i69<(*pData).elements.nCount; i69++) {
            if (i69) 
                printf(",");
            printf("{");
            printf("force ");
            printf("{");
            printf("data ");
            {
                int i70;
                printf("{");
                for(i70=0; i70<(*pData).elements.arr[i69].force.data.nCount; i70++) {
                    if (i70) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i69].force.data.arr[i70]);
                }
                printf("}");
            }
            printf("}");
            printf(", ");
            printf("torque ");
            printf("{");
            printf("data ");
            {
                int i71;
                printf("{");
                for(i71=0; i71<(*pData).elements.arr[i69].torque.data.nCount; i71++) {
                    if (i71) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i69].torque.data.arr[i71]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_IMUSensors(const char *paramName, const asn1SccBase_samples_IMUSensors *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-IMUSensors ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("acc ");
    printf("{");
    printf("data ");
    {
        int i72;
        printf("{");
        for(i72=0; i72<(*pData).acc.data.nCount; i72++) {
            if (i72) 
                printf(",");
            printf("%f", (*pData).acc.data.arr[i72]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("gyro ");
    printf("{");
    printf("data ");
    {
        int i73;
        printf("{");
        for(i73=0; i73<(*pData).gyro.data.nCount; i73++) {
            if (i73) 
                printf(",");
            printf("%f", (*pData).gyro.data.arr[i73]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("mag ");
    printf("{");
    printf("data ");
    {
        int i74;
        printf("{");
        for(i74=0; i74<(*pData).mag.data.nCount; i74++) {
            if (i74) 
                printf(",");
            printf("%f", (*pData).mag.data.arr[i74]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_LinearAngular6DCommand(const char *paramName, const asn1SccBase_LinearAngular6DCommand *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-LinearAngular6DCommand ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("linear ");
    printf("{");
    printf("data ");
    {
        int i75;
        printf("{");
        for(i75=0; i75<(*pData).linear.data.nCount; i75++) {
            if (i75) 
                printf(",");
            printf("%f", (*pData).linear.data.arr[i75]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("angular ");
    printf("{");
    printf("data ");
    {
        int i76;
        printf("{");
        for(i76=0; i76<(*pData).angular.data.nCount; i76++) {
            if (i76) 
                printf(",");
            printf("%f", (*pData).angular.data.arr[i76]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_UInt8(const char *paramName, const asn1SccT_UInt8 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-UInt8 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_UInt64(const char *paramName, const asn1SccT_UInt64 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-UInt64 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_commands_LinearAngular6DCommand_m(const char *paramName, const asn1SccBase_commands_LinearAngular6DCommand_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-commands-LinearAngular6DCommand-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("linear ");
    printf("{");
    printf("data ");
    {
        int i77;
        printf("{");
        for(i77=0; i77<(*pData).linear.data.nCount; i77++) {
            if (i77) 
                printf(",");
            printf("%f", (*pData).linear.data.arr[i77]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("angular ");
    printf("{");
    printf("data ");
    {
        int i78;
        printf("{");
        for(i78=0; i78<(*pData).angular.data.nCount; i78++) {
            if (i78) 
                printf(",");
            printf("%f", (*pData).angular.data.arr[i78]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Motion2D(const char *paramName, const asn1SccBase_samples_Motion2D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Motion2D ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("translation ");
    printf("%f", (*pData).translation);
    printf(", ");
    printf("rotation ");
    printf("%f", (*pData).rotation);
    printf(", ");
    printf("heading ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).heading.rad);
    printf("}");
    printf(", ");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_NamedVector_Base_JointTransform(const char *paramName, const asn1SccBase_NamedVector_Base_JointTransform *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-NamedVector-Base-JointTransform ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i79;
        printf("{");
        for(i79=0; i79<(*pData).names.nCount; i79++) {
            if (i79) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i79].nCount; i++)
                    printf("%02x", (*pData).names.arr[i79].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i80;
        printf("{");
        for(i80=0; i80<(*pData).elements.nCount; i80++) {
            if (i80) 
                printf(",");
            printf("{");
            printf("sourceframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).elements.arr[i80].sourceframe.nCount; i++)
                    printf("%02x", (*pData).elements.arr[i80].sourceframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("targetframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).elements.arr[i80].targetframe.nCount; i++)
                    printf("%02x", (*pData).elements.arr[i80].targetframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("rotationaxis ");
            printf("{");
            printf("data ");
            {
                int i81;
                printf("{");
                for(i81=0; i81<(*pData).elements.arr[i80].rotationaxis.data.nCount; i81++) {
                    if (i81) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i80].rotationaxis.data.arr[i81]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_Matrix2d(const char *paramName, const asn1SccWrappers_Matrix2d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Matrix2d ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i82;
        printf("{");
        for(i82=0; i82<(*pData).data.nCount; i82++) {
            if (i82) 
                printf(",");
            printf("%f", (*pData).data.arr[i82]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Time(const char *paramName, const asn1SccT_Time *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-Time ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("secs ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).secs);
    #else
    printf("%d", (*pData).secs);
    #endif
    printf(", ");
    printf("nsecs ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).nsecs);
    #else
    printf("%d", (*pData).nsecs);
    #endif
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Int32(const char *paramName, const asn1SccT_Int32 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-Int32 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointTransformVector(const char *paramName, const asn1SccBase_JointTransformVector *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointTransformVector ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i83;
        printf("{");
        for(i83=0; i83<(*pData).names.nCount; i83++) {
            if (i83) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i83].nCount; i++)
                    printf("%02x", (*pData).names.arr[i83].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i84;
        printf("{");
        for(i84=0; i84<(*pData).elements.nCount; i84++) {
            if (i84) 
                printf(",");
            printf("{");
            printf("sourceframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).elements.arr[i84].sourceframe.nCount; i++)
                    printf("%02x", (*pData).elements.arr[i84].sourceframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("targetframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).elements.arr[i84].targetframe.nCount; i++)
                    printf("%02x", (*pData).elements.arr[i84].targetframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("rotationaxis ");
            printf("{");
            printf("data ");
            {
                int i85;
                printf("{");
                for(i85=0; i85<(*pData).elements.arr[i84].rotationaxis.data.nCount; i85++) {
                    if (i85) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i84].rotationaxis.data.arr[i85]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Temperature(const char *paramName, const asn1SccBase_Temperature *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Temperature ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("kelvin ");
    printf("%f", (*pData).kelvin);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_Vector6d(const char *paramName, const asn1SccWrappers_Vector6d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Vector6d ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i86;
        printf("{");
        for(i86=0; i86<(*pData).data.nCount; i86++) {
            if (i86) 
                printf(",");
            printf("%f", (*pData).data.arr[i86]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_Matrix6d(const char *paramName, const asn1SccWrappers_Matrix6d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Matrix6d ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i87;
        printf("{");
        for(i87=0; i87<(*pData).data.nCount; i87++) {
            if (i87) 
                printf(",");
            printf("%f", (*pData).data.arr[i87]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointsTrajectory(const char *paramName, const asn1SccBase_JointsTrajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointsTrajectory ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i88;
        printf("{");
        for(i88=0; i88<(*pData).names.nCount; i88++) {
            if (i88) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i88].nCount; i++)
                    printf("%02x", (*pData).names.arr[i88].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i89;
        printf("{");
        for(i89=0; i89<(*pData).elements.nCount; i89++) {
            if (i89) 
                printf(",");
            {
                int i90;
                printf("{");
                for(i90=0; i90<(*pData).elements.arr[i89].nCount; i90++) {
                    if (i90) 
                        printf(",");
                    printf("{");
                    printf("position ");
                    printf("%f", (*pData).elements.arr[i89].arr[i90].position);
                    printf(", ");
                    printf("speed ");
                    printf("%f", (*pData).elements.arr[i89].arr[i90].speed);
                    printf(", ");
                    printf("effort ");
                    printf("%f", (*pData).elements.arr[i89].arr[i90].effort);
                    printf(", ");
                    printf("raw ");
                    printf("%f", (*pData).elements.arr[i89].arr[i90].raw);
                    printf(", ");
                    printf("acceleration ");
                    printf("%f", (*pData).elements.arr[i89].arr[i90].acceleration);
                    printf("}");
                }
                printf("}");
            }
        }
        printf("}");
    }
    printf(", ");
    printf("times-val ");
    {
        int i91;
        printf("{");
        for(i91=0; i91<(*pData).times_val.nCount; i91++) {
            if (i91) 
                printf(",");
            printf("{");
            printf("microseconds ");
            #if WORD_SIZE==8
            printf("%lld", (*pData).times_val.arr[i91].microseconds);
            #else
            printf("%d", (*pData).times_val.arr[i91].microseconds);
            #endif
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Std_orogen_typekits_mtype_std_vector_base_Waypoint(const char *paramName, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Waypoint *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Std-orogen-typekits-mtype-std-vector-base-Waypoint ::= ", paramName);
    printf("%s ", paramName);
    {
        int i92;
        printf("{");
        for(i92=0; i92<(*pData).nCount; i92++) {
            if (i92) 
                printf(",");
            printf("{");
            printf("position ");
            printf("{");
            printf("data ");
            {
                int i93;
                printf("{");
                for(i93=0; i93<(*pData).arr[i92].position.data.nCount; i93++) {
                    if (i93) 
                        printf(",");
                    printf("%f", (*pData).arr[i92].position.data.arr[i93]);
                }
                printf("}");
            }
            printf("}");
            printf(", ");
            printf("heading ");
            printf("%f", (*pData).arr[i92].heading);
            printf(", ");
            printf("tol-position ");
            printf("%f", (*pData).arr[i92].tol_position);
            printf(", ");
            printf("tol-heading ");
            printf("%f", (*pData).arr[i92].tol_heading);
            printf("}");
        }
        printf("}");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Sonar(const char *paramName, const asn1SccBase_samples_Sonar *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Sonar ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("timestamps ");
    {
        int i94;
        printf("{");
        for(i94=0; i94<(*pData).timestamps.nCount; i94++) {
            if (i94) 
                printf(",");
            printf("{");
            printf("microseconds ");
            #if WORD_SIZE==8
            printf("%lld", (*pData).timestamps.arr[i94].microseconds);
            #else
            printf("%d", (*pData).timestamps.arr[i94].microseconds);
            #endif
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("bin-duration ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).bin_duration.microseconds);
    #else
    printf("%d", (*pData).bin_duration.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("beam-width ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).beam_width.rad);
    printf("}");
    printf(", ");
    printf("beam-height ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).beam_height.rad);
    printf("}");
    printf(", ");
    printf("bearings ");
    {
        int i95;
        printf("{");
        for(i95=0; i95<(*pData).bearings.nCount; i95++) {
            if (i95) 
                printf(",");
            printf("{");
            printf("rad ");
            printf("%f", (*pData).bearings.arr[i95].rad);
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("speed-of-sound ");
    printf("%f", (*pData).speed_of_sound);
    printf(", ");
    printf("bin-count ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).bin_count);
    #else
    printf("%d", (*pData).bin_count);
    #endif
    printf(", ");
    printf("beam-count ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).beam_count);
    #else
    printf("%d", (*pData).beam_count);
    #endif
    printf(", ");
    printf("bins ");
    {
        int i96;
        printf("{");
        for(i96=0; i96<(*pData).bins.nCount; i96++) {
            if (i96) 
                printf(",");
            printf("%f", (*pData).bins.arr[i96]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Angle(const char *paramName, const asn1SccBase_Angle *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Angle ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("rad ");
    printf("%f", (*pData).rad);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_frame_frame_attrib_t(const char *paramName, const asn1SccBase_samples_frame_frame_attrib_t *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-frame-frame-attrib-t ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).data.nCount; i++)
            printf("%02x", (*pData).data.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("name-val ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).name_val.nCount; i++)
            printf("%02x", (*pData).name_val.arr[i]);
        printf("'H");
    }

    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_geometry_SplineBase_CoordinateType(const char *paramName, const asn1SccBase_geometry_SplineBase_CoordinateType *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-geometry-SplineBase-CoordinateType ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-geometry-splinebase-coordinatetype-derivative-to-next");
        break;
    case 1:
        printf("base-geometry-splinebase-coordinatetype-derivative-to-prior");
        break;
    case 2:
        printf("base-geometry-splinebase-coordinatetype-knuckle-point");
        break;
    case 3:
        printf("base-geometry-splinebase-coordinatetype-ordinary-point");
        break;
    case 4:
        printf("base-geometry-splinebase-coordinatetype-second-derivative-to-next");
        break;
    case 5:
        printf("base-geometry-splinebase-coordinatetype-second-derivative-to-prior");
        break;
    case 6:
        printf("base-geometry-splinebase-coordinatetype-tangent-point-for-next");
        break;
    case 7:
        printf("base-geometry-splinebase-coordinatetype-tangent-point-for-prior");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_frame_Frame(const char *paramName, const asn1SccBase_samples_frame_Frame *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-frame-Frame ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("received-time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).received_time.microseconds);
    #else
    printf("%d", (*pData).received_time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("image ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).image.nCount; i++)
            printf("%02x", (*pData).image.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("attributes ");
    {
        int i97;
        printf("{");
        for(i97=0; i97<(*pData).attributes.nCount; i97++) {
            if (i97) 
                printf(",");
            printf("{");
            printf("data ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).attributes.arr[i97].data.nCount; i++)
                    printf("%02x", (*pData).attributes.arr[i97].data.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("name-val ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).attributes.arr[i97].name_val.nCount; i++)
                    printf("%02x", (*pData).attributes.arr[i97].name_val.arr[i]);
                printf("'H");
            }

            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("size-val ");
    printf("{");
    printf("width ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).size_val.width);
    #else
    printf("%d", (*pData).size_val.width);
    #endif
    printf(", ");
    printf("height ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).size_val.height);
    #else
    printf("%d", (*pData).size_val.height);
    #endif
    printf("}");
    printf(", ");
    printf("data-depth ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).data_depth);
    #else
    printf("%d", (*pData).data_depth);
    #endif
    printf(", ");
    printf("pixel-size ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).pixel_size);
    #else
    printf("%d", (*pData).pixel_size);
    #endif
    printf(", ");
    printf("row-size ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).row_size);
    #else
    printf("%d", (*pData).row_size);
    #endif
    printf(", ");
    printf("frame-mode ");
    switch((*pData).frame_mode) {
    case 0:
        printf("base-samples-frame-frame-mode-t-compressed-modes");
        break;
    case 1:
        printf("base-samples-frame-frame-mode-t-mode-bayer");
        break;
    case 2:
        printf("base-samples-frame-frame-mode-t-mode-bayer-bggr");
        break;
    case 3:
        printf("base-samples-frame-frame-mode-t-mode-bayer-gbrg");
        break;
    case 4:
        printf("base-samples-frame-frame-mode-t-mode-bayer-grbg");
        break;
    case 5:
        printf("base-samples-frame-frame-mode-t-mode-bayer-rggb");
        break;
    case 6:
        printf("base-samples-frame-frame-mode-t-mode-bgr");
        break;
    case 7:
        printf("base-samples-frame-frame-mode-t-mode-grayscale");
        break;
    case 8:
        printf("base-samples-frame-frame-mode-t-mode-jpeg");
        break;
    case 9:
        printf("base-samples-frame-frame-mode-t-mode-pjpg");
        break;
    case 10:
        printf("base-samples-frame-frame-mode-t-mode-png");
        break;
    case 11:
        printf("base-samples-frame-frame-mode-t-mode-rgb");
        break;
    case 12:
        printf("base-samples-frame-frame-mode-t-mode-rgb32");
        break;
    case 13:
        printf("base-samples-frame-frame-mode-t-mode-undefined");
        break;
    case 14:
        printf("base-samples-frame-frame-mode-t-mode-uyvy");
        break;
    case 15:
        printf("base-samples-frame-frame-mode-t-raw-modes");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).frame_mode)");
    }
    printf(", ");
    printf("frame-status ");
    switch((*pData).frame_status) {
    case 0:
        printf("base-samples-frame-frame-status-t-status-empty");
        break;
    case 1:
        printf("base-samples-frame-frame-status-t-status-invalid");
        break;
    case 2:
        printf("base-samples-frame-frame-status-t-status-valid");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).frame_status)");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_PoseUpdateThreshold(const char *paramName, const asn1SccBase_PoseUpdateThreshold *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-PoseUpdateThreshold ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("distance ");
    printf("%f", (*pData).distance);
    printf(", ");
    printf("angle ");
    printf("%f", (*pData).angle);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_TransformWithCovariance_m(const char *paramName, const asn1SccBase_TransformWithCovariance_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-TransformWithCovariance-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("translation ");
    printf("{");
    printf("data ");
    {
        int i98;
        printf("{");
        for(i98=0; i98<(*pData).translation.data.nCount; i98++) {
            if (i98) 
                printf(",");
            printf("%f", (*pData).translation.data.arr[i98]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("{");
    printf("im ");
    {
        int i99;
        printf("{");
        for(i99=0; i99<(*pData).orientation.im.nCount; i99++) {
            if (i99) 
                printf(",");
            printf("%f", (*pData).orientation.im.arr[i99]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).orientation.re);
    printf("}");
    printf(", ");
    printf("cov ");
    printf("{");
    printf("data ");
    {
        int i100;
        printf("{");
        for(i100=0; i100<(*pData).cov.data.nCount; i100++) {
            if (i100) 
                printf(",");
            printf("%f", (*pData).cov.data.arr[i100]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_geometry_SplineType(const char *paramName, const asn1SccWrappers_geometry_SplineType *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-geometry-SplineType ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("wrappers-geometry-splinetype-degenerate");
        break;
    case 1:
        printf("wrappers-geometry-splinetype-polynomial-bezier");
        break;
    case 2:
        printf("wrappers-geometry-splinetype-polynomial-bspline");
        break;
    case 3:
        printf("wrappers-geometry-splinetype-rational-bezier");
        break;
    case 4:
        printf("wrappers-geometry-splinetype-rational-bspline");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointState(const char *paramName, const asn1SccBase_JointState *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointState ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("position ");
    printf("%f", (*pData).position);
    printf(", ");
    printf("speed ");
    printf("%f", (*pData).speed);
    printf(", ");
    printf("effort ");
    printf("%f", (*pData).effort);
    printf(", ");
    printf("raw ");
    printf("%f", (*pData).raw);
    printf(", ");
    printf("acceleration ");
    printf("%f", (*pData).acceleration);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Pose2D_m(const char *paramName, const asn1SccBase_Pose2D_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Pose2D-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("position ");
    printf("{");
    printf("data ");
    {
        int i101;
        printf("{");
        for(i101=0; i101<(*pData).position.data.nCount; i101++) {
            if (i101) 
                printf(",");
            printf("%f", (*pData).position.data.arr[i101]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("%f", (*pData).orientation);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_frame_FramePair(const char *paramName, const asn1SccBase_samples_frame_FramePair *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-frame-FramePair ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("first ");
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).first.time.microseconds);
    #else
    printf("%d", (*pData).first.time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("received-time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).first.received_time.microseconds);
    #else
    printf("%d", (*pData).first.received_time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("image ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).first.image.nCount; i++)
            printf("%02x", (*pData).first.image.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("attributes ");
    {
        int i102;
        printf("{");
        for(i102=0; i102<(*pData).first.attributes.nCount; i102++) {
            if (i102) 
                printf(",");
            printf("{");
            printf("data ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).first.attributes.arr[i102].data.nCount; i++)
                    printf("%02x", (*pData).first.attributes.arr[i102].data.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("name-val ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).first.attributes.arr[i102].name_val.nCount; i++)
                    printf("%02x", (*pData).first.attributes.arr[i102].name_val.arr[i]);
                printf("'H");
            }

            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("size-val ");
    printf("{");
    printf("width ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).first.size_val.width);
    #else
    printf("%d", (*pData).first.size_val.width);
    #endif
    printf(", ");
    printf("height ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).first.size_val.height);
    #else
    printf("%d", (*pData).first.size_val.height);
    #endif
    printf("}");
    printf(", ");
    printf("data-depth ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).first.data_depth);
    #else
    printf("%d", (*pData).first.data_depth);
    #endif
    printf(", ");
    printf("pixel-size ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).first.pixel_size);
    #else
    printf("%d", (*pData).first.pixel_size);
    #endif
    printf(", ");
    printf("row-size ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).first.row_size);
    #else
    printf("%d", (*pData).first.row_size);
    #endif
    printf(", ");
    printf("frame-mode ");
    switch((*pData).first.frame_mode) {
    case 0:
        printf("base-samples-frame-frame-mode-t-compressed-modes");
        break;
    case 1:
        printf("base-samples-frame-frame-mode-t-mode-bayer");
        break;
    case 2:
        printf("base-samples-frame-frame-mode-t-mode-bayer-bggr");
        break;
    case 3:
        printf("base-samples-frame-frame-mode-t-mode-bayer-gbrg");
        break;
    case 4:
        printf("base-samples-frame-frame-mode-t-mode-bayer-grbg");
        break;
    case 5:
        printf("base-samples-frame-frame-mode-t-mode-bayer-rggb");
        break;
    case 6:
        printf("base-samples-frame-frame-mode-t-mode-bgr");
        break;
    case 7:
        printf("base-samples-frame-frame-mode-t-mode-grayscale");
        break;
    case 8:
        printf("base-samples-frame-frame-mode-t-mode-jpeg");
        break;
    case 9:
        printf("base-samples-frame-frame-mode-t-mode-pjpg");
        break;
    case 10:
        printf("base-samples-frame-frame-mode-t-mode-png");
        break;
    case 11:
        printf("base-samples-frame-frame-mode-t-mode-rgb");
        break;
    case 12:
        printf("base-samples-frame-frame-mode-t-mode-rgb32");
        break;
    case 13:
        printf("base-samples-frame-frame-mode-t-mode-undefined");
        break;
    case 14:
        printf("base-samples-frame-frame-mode-t-mode-uyvy");
        break;
    case 15:
        printf("base-samples-frame-frame-mode-t-raw-modes");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).first.frame_mode)");
    }
    printf(", ");
    printf("frame-status ");
    switch((*pData).first.frame_status) {
    case 0:
        printf("base-samples-frame-frame-status-t-status-empty");
        break;
    case 1:
        printf("base-samples-frame-frame-status-t-status-invalid");
        break;
    case 2:
        printf("base-samples-frame-frame-status-t-status-valid");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).first.frame_status)");
    }
    printf("}");
    printf(", ");
    printf("second ");
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).second.time.microseconds);
    #else
    printf("%d", (*pData).second.time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("received-time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).second.received_time.microseconds);
    #else
    printf("%d", (*pData).second.received_time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("image ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).second.image.nCount; i++)
            printf("%02x", (*pData).second.image.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("attributes ");
    {
        int i103;
        printf("{");
        for(i103=0; i103<(*pData).second.attributes.nCount; i103++) {
            if (i103) 
                printf(",");
            printf("{");
            printf("data ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).second.attributes.arr[i103].data.nCount; i++)
                    printf("%02x", (*pData).second.attributes.arr[i103].data.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("name-val ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).second.attributes.arr[i103].name_val.nCount; i++)
                    printf("%02x", (*pData).second.attributes.arr[i103].name_val.arr[i]);
                printf("'H");
            }

            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("size-val ");
    printf("{");
    printf("width ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).second.size_val.width);
    #else
    printf("%d", (*pData).second.size_val.width);
    #endif
    printf(", ");
    printf("height ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).second.size_val.height);
    #else
    printf("%d", (*pData).second.size_val.height);
    #endif
    printf("}");
    printf(", ");
    printf("data-depth ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).second.data_depth);
    #else
    printf("%d", (*pData).second.data_depth);
    #endif
    printf(", ");
    printf("pixel-size ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).second.pixel_size);
    #else
    printf("%d", (*pData).second.pixel_size);
    #endif
    printf(", ");
    printf("row-size ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).second.row_size);
    #else
    printf("%d", (*pData).second.row_size);
    #endif
    printf(", ");
    printf("frame-mode ");
    switch((*pData).second.frame_mode) {
    case 0:
        printf("base-samples-frame-frame-mode-t-compressed-modes");
        break;
    case 1:
        printf("base-samples-frame-frame-mode-t-mode-bayer");
        break;
    case 2:
        printf("base-samples-frame-frame-mode-t-mode-bayer-bggr");
        break;
    case 3:
        printf("base-samples-frame-frame-mode-t-mode-bayer-gbrg");
        break;
    case 4:
        printf("base-samples-frame-frame-mode-t-mode-bayer-grbg");
        break;
    case 5:
        printf("base-samples-frame-frame-mode-t-mode-bayer-rggb");
        break;
    case 6:
        printf("base-samples-frame-frame-mode-t-mode-bgr");
        break;
    case 7:
        printf("base-samples-frame-frame-mode-t-mode-grayscale");
        break;
    case 8:
        printf("base-samples-frame-frame-mode-t-mode-jpeg");
        break;
    case 9:
        printf("base-samples-frame-frame-mode-t-mode-pjpg");
        break;
    case 10:
        printf("base-samples-frame-frame-mode-t-mode-png");
        break;
    case 11:
        printf("base-samples-frame-frame-mode-t-mode-rgb");
        break;
    case 12:
        printf("base-samples-frame-frame-mode-t-mode-rgb32");
        break;
    case 13:
        printf("base-samples-frame-frame-mode-t-mode-undefined");
        break;
    case 14:
        printf("base-samples-frame-frame-mode-t-mode-uyvy");
        break;
    case 15:
        printf("base-samples-frame-frame-mode-t-raw-modes");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).second.frame_mode)");
    }
    printf(", ");
    printf("frame-status ");
    switch((*pData).second.frame_status) {
    case 0:
        printf("base-samples-frame-frame-status-t-status-empty");
        break;
    case 1:
        printf("base-samples-frame-frame-status-t-status-invalid");
        break;
    case 2:
        printf("base-samples-frame-frame-status-t-status-valid");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).second.frame_status)");
    }
    printf("}");
    printf(", ");
    printf("id ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).id);
    #else
    printf("%d", (*pData).id);
    #endif
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_RigidBodyAcceleration(const char *paramName, const asn1SccBase_samples_RigidBodyAcceleration *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-RigidBodyAcceleration ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("acceleration ");
    printf("{");
    printf("data ");
    {
        int i104;
        printf("{");
        for(i104=0; i104<(*pData).acceleration.data.nCount; i104++) {
            if (i104) 
                printf(",");
            printf("%f", (*pData).acceleration.data.arr[i104]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-acceleration ");
    printf("{");
    printf("data ");
    {
        int i105;
        printf("{");
        for(i105=0; i105<(*pData).cov_acceleration.data.nCount; i105++) {
            if (i105) 
                printf(",");
            printf("%f", (*pData).cov_acceleration.data.arr[i105]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("angular-acceleration ");
    printf("{");
    printf("data ");
    {
        int i106;
        printf("{");
        for(i106=0; i106<(*pData).angular_acceleration.data.nCount; i106++) {
            if (i106) 
                printf(",");
            printf("%f", (*pData).angular_acceleration.data.arr[i106]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-angular-acceleration ");
    printf("{");
    printf("data ");
    {
        int i107;
        printf("{");
        for(i107=0; i107<(*pData).cov_angular_acceleration.data.nCount; i107++) {
            if (i107) 
                printf(",");
            printf("%f", (*pData).cov_angular_acceleration.data.arr[i107]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Wrench_m(const char *paramName, const asn1SccBase_Wrench_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Wrench-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("force ");
    printf("{");
    printf("data ");
    {
        int i108;
        printf("{");
        for(i108=0; i108<(*pData).force.data.nCount; i108++) {
            if (i108) 
                printf(",");
            printf("%f", (*pData).force.data.arr[i108]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("torque ");
    printf("{");
    printf("data ");
    {
        int i109;
        printf("{");
        for(i109=0; i109<(*pData).torque.data.nCount; i109++) {
            if (i109) 
                printf(",");
            printf("%f", (*pData).torque.data.arr[i109]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Double(const char *paramName, const asn1SccT_Double *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-Double ::= ", paramName);
    printf("%s ", paramName);
    printf("%f", (*pData));
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Dummy2Base_T(const char *paramName, const asn1SccDummy2Base_T *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Dummy2Base-T ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_TwistWithCovariance(const char *paramName, const asn1SccBase_TwistWithCovariance *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-TwistWithCovariance ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("vel ");
    printf("{");
    printf("data ");
    {
        int i110;
        printf("{");
        for(i110=0; i110<(*pData).vel.data.nCount; i110++) {
            if (i110) 
                printf(",");
            printf("%f", (*pData).vel.data.arr[i110]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("rot ");
    printf("{");
    printf("data ");
    {
        int i111;
        printf("{");
        for(i111=0; i111<(*pData).rot.data.nCount; i111++) {
            if (i111) 
                printf(",");
            printf("%f", (*pData).rot.data.arr[i111]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov ");
    printf("{");
    printf("data ");
    {
        int i112;
        printf("{");
        for(i112=0; i112<(*pData).cov.data.nCount; i112++) {
            if (i112) 
                printf(",");
            printf("%f", (*pData).cov.data.arr[i112]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_NamedVector_Base_JointState(const char *paramName, const asn1SccBase_NamedVector_Base_JointState *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-NamedVector-Base-JointState ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i113;
        printf("{");
        for(i113=0; i113<(*pData).names.nCount; i113++) {
            if (i113) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i113].nCount; i++)
                    printf("%02x", (*pData).names.arr[i113].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i114;
        printf("{");
        for(i114=0; i114<(*pData).elements.nCount; i114++) {
            if (i114) 
                printf(",");
            printf("{");
            printf("position ");
            printf("%f", (*pData).elements.arr[i114].position);
            printf(", ");
            printf("speed ");
            printf("%f", (*pData).elements.arr[i114].speed);
            printf(", ");
            printf("effort ");
            printf("%f", (*pData).elements.arr[i114].effort);
            printf(", ");
            printf("raw ");
            printf("%f", (*pData).elements.arr[i114].raw);
            printf(", ");
            printf("acceleration ");
            printf("%f", (*pData).elements.arr[i114].acceleration);
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_TimeStamped_Base_commands_Motion2D(const char *paramName, const asn1SccBase_TimeStamped_Base_commands_Motion2D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-TimeStamped-Base-commands-Motion2D ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("translation ");
    printf("%f", (*pData).translation);
    printf(", ");
    printf("rotation ");
    printf("%f", (*pData).rotation);
    printf(", ");
    printf("heading ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).heading.rad);
    printf("}");
    printf(", ");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_DepthMap_UNIT_AXIS(const char *paramName, const asn1SccBase_samples_DepthMap_UNIT_AXIS *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-DepthMap-UNIT-AXIS ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-samples-depthmap-unit-axis-unit-x");
        break;
    case 1:
        printf("base-samples-depthmap-unit-axis-unit-y");
        break;
    case 2:
        printf("base-samples-depthmap-unit-axis-unit-z");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_IMUSensors_m(const char *paramName, const asn1SccBase_samples_IMUSensors_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-IMUSensors-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("acc ");
    printf("{");
    printf("data ");
    {
        int i115;
        printf("{");
        for(i115=0; i115<(*pData).acc.data.nCount; i115++) {
            if (i115) 
                printf(",");
            printf("%f", (*pData).acc.data.arr[i115]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("gyro ");
    printf("{");
    printf("data ");
    {
        int i116;
        printf("{");
        for(i116=0; i116<(*pData).gyro.data.nCount; i116++) {
            if (i116) 
                printf(",");
            printf("%f", (*pData).gyro.data.arr[i116]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("mag ");
    printf("{");
    printf("data ");
    {
        int i117;
        printf("{");
        for(i117=0; i117<(*pData).mag.data.nCount; i117++) {
            if (i117) 
                printf(",");
            printf("%f", (*pData).mag.data.arr[i117]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_NamedVector_Base_Wrench(const char *paramName, const asn1SccBase_NamedVector_Base_Wrench *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-NamedVector-Base-Wrench ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i118;
        printf("{");
        for(i118=0; i118<(*pData).names.nCount; i118++) {
            if (i118) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i118].nCount; i++)
                    printf("%02x", (*pData).names.arr[i118].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i119;
        printf("{");
        for(i119=0; i119<(*pData).elements.nCount; i119++) {
            if (i119) 
                printf(",");
            printf("{");
            printf("force ");
            printf("{");
            printf("data ");
            {
                int i120;
                printf("{");
                for(i120=0; i120<(*pData).elements.arr[i119].force.data.nCount; i120++) {
                    if (i120) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i119].force.data.arr[i120]);
                }
                printf("}");
            }
            printf("}");
            printf(", ");
            printf("torque ");
            printf("{");
            printf("data ");
            {
                int i121;
                printf("{");
                for(i121=0; i121<(*pData).elements.arr[i119].torque.data.nCount; i121++) {
                    if (i121) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i119].torque.data.arr[i121]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_DepthMap_PROJECTION_TYPE(const char *paramName, const asn1SccBase_samples_DepthMap_PROJECTION_TYPE *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-DepthMap-PROJECTION-TYPE ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-samples-depthmap-projection-type-planar");
        break;
    case 1:
        printf("base-samples-depthmap-projection-type-polar");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Trajectory(const char *paramName, const asn1SccBase_Trajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Trajectory ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("speed ");
    printf("%f", (*pData).speed);
    printf(", ");
    printf("spline ");
    printf("{");
    printf("geometric-resolution ");
    printf("%f", (*pData).spline.geometric_resolution);
    printf(", ");
    printf("dimension ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).spline.dimension);
    #else
    printf("%d", (*pData).spline.dimension);
    #endif
    printf(", ");
    printf("curve-order ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).spline.curve_order);
    #else
    printf("%d", (*pData).spline.curve_order);
    #endif
    printf(", ");
    printf("kind ");
    switch((*pData).spline.kind) {
    case 0:
        printf("wrappers-geometry-splinetype-degenerate");
        break;
    case 1:
        printf("wrappers-geometry-splinetype-polynomial-bezier");
        break;
    case 2:
        printf("wrappers-geometry-splinetype-polynomial-bspline");
        break;
    case 3:
        printf("wrappers-geometry-splinetype-rational-bezier");
        break;
    case 4:
        printf("wrappers-geometry-splinetype-rational-bspline");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).spline.kind)");
    }
    printf(", ");
    printf("knots ");
    {
        int i122;
        printf("{");
        for(i122=0; i122<(*pData).spline.knots.nCount; i122++) {
            if (i122) 
                printf(",");
            printf("%f", (*pData).spline.knots.arr[i122]);
        }
        printf("}");
    }
    printf(", ");
    printf("vertices ");
    {
        int i123;
        printf("{");
        for(i123=0; i123<(*pData).spline.vertices.nCount; i123++) {
            if (i123) 
                printf(",");
            printf("%f", (*pData).spline.vertices.arr[i123]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Wrench(const char *paramName, const asn1SccBase_Wrench *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Wrench ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("force ");
    printf("{");
    printf("data ");
    {
        int i124;
        printf("{");
        for(i124=0; i124<(*pData).force.data.nCount; i124++) {
            if (i124) 
                printf(",");
            printf("%f", (*pData).force.data.arr[i124]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("torque ");
    printf("{");
    printf("data ");
    {
        int i125;
        printf("{");
        for(i125=0; i125<(*pData).torque.data.nCount; i125++) {
            if (i125) 
                printf(",");
            printf("%f", (*pData).torque.data.arr[i125]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_DepthMap(const char *paramName, const asn1SccBase_samples_DepthMap *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-DepthMap ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("timestamps ");
    {
        int i126;
        printf("{");
        for(i126=0; i126<(*pData).timestamps.nCount; i126++) {
            if (i126) 
                printf(",");
            printf("{");
            printf("microseconds ");
            #if WORD_SIZE==8
            printf("%lld", (*pData).timestamps.arr[i126].microseconds);
            #else
            printf("%d", (*pData).timestamps.arr[i126].microseconds);
            #endif
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("vertical-projection ");
    switch((*pData).vertical_projection) {
    case 0:
        printf("base-samples-depthmap-projection-type-planar");
        break;
    case 1:
        printf("base-samples-depthmap-projection-type-polar");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).vertical_projection)");
    }
    printf(", ");
    printf("horizontal-projection ");
    switch((*pData).horizontal_projection) {
    case 0:
        printf("base-samples-depthmap-projection-type-planar");
        break;
    case 1:
        printf("base-samples-depthmap-projection-type-polar");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData).horizontal_projection)");
    }
    printf(", ");
    printf("vertical-interval ");
    {
        int i127;
        printf("{");
        for(i127=0; i127<(*pData).vertical_interval.nCount; i127++) {
            if (i127) 
                printf(",");
            printf("%f", (*pData).vertical_interval.arr[i127]);
        }
        printf("}");
    }
    printf(", ");
    printf("horizontal-interval ");
    {
        int i128;
        printf("{");
        for(i128=0; i128<(*pData).horizontal_interval.nCount; i128++) {
            if (i128) 
                printf(",");
            printf("%f", (*pData).horizontal_interval.arr[i128]);
        }
        printf("}");
    }
    printf(", ");
    printf("vertical-size ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).vertical_size);
    #else
    printf("%d", (*pData).vertical_size);
    #endif
    printf(", ");
    printf("horizontal-size ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).horizontal_size);
    #else
    printf("%d", (*pData).horizontal_size);
    #endif
    printf(", ");
    printf("distances ");
    {
        int i129;
        printf("{");
        for(i129=0; i129<(*pData).distances.nCount; i129++) {
            if (i129) 
                printf(",");
            printf("%f", (*pData).distances.arr[i129]);
        }
        printf("}");
    }
    printf(", ");
    printf("remissions ");
    {
        int i130;
        printf("{");
        for(i130=0; i130<(*pData).remissions.nCount; i130++) {
            if (i130) 
                printf(",");
            printf("%f", (*pData).remissions.arr[i130]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_TwistWithCovariance_m(const char *paramName, const asn1SccBase_TwistWithCovariance_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-TwistWithCovariance-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("vel ");
    printf("{");
    printf("data ");
    {
        int i131;
        printf("{");
        for(i131=0; i131<(*pData).vel.data.nCount; i131++) {
            if (i131) 
                printf(",");
            printf("%f", (*pData).vel.data.arr[i131]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("rot ");
    printf("{");
    printf("data ");
    {
        int i132;
        printf("{");
        for(i132=0; i132<(*pData).rot.data.nCount; i132++) {
            if (i132) 
                printf(",");
            printf("%f", (*pData).rot.data.arr[i132]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov ");
    printf("{");
    printf("data ");
    {
        int i133;
        printf("{");
        for(i133=0; i133<(*pData).cov.data.nCount; i133++) {
            if (i133) 
                printf(",");
            printf("%f", (*pData).cov.data.arr[i133]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_frame_frame_mode_t(const char *paramName, const asn1SccBase_samples_frame_frame_mode_t *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-frame-frame-mode-t ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-samples-frame-frame-mode-t-compressed-modes");
        break;
    case 1:
        printf("base-samples-frame-frame-mode-t-mode-bayer");
        break;
    case 2:
        printf("base-samples-frame-frame-mode-t-mode-bayer-bggr");
        break;
    case 3:
        printf("base-samples-frame-frame-mode-t-mode-bayer-gbrg");
        break;
    case 4:
        printf("base-samples-frame-frame-mode-t-mode-bayer-grbg");
        break;
    case 5:
        printf("base-samples-frame-frame-mode-t-mode-bayer-rggb");
        break;
    case 6:
        printf("base-samples-frame-frame-mode-t-mode-bgr");
        break;
    case 7:
        printf("base-samples-frame-frame-mode-t-mode-grayscale");
        break;
    case 8:
        printf("base-samples-frame-frame-mode-t-mode-jpeg");
        break;
    case 9:
        printf("base-samples-frame-frame-mode-t-mode-pjpg");
        break;
    case 10:
        printf("base-samples-frame-frame-mode-t-mode-png");
        break;
    case 11:
        printf("base-samples-frame-frame-mode-t-mode-rgb");
        break;
    case 12:
        printf("base-samples-frame-frame-mode-t-mode-rgb32");
        break;
    case 13:
        printf("base-samples-frame-frame-mode-t-mode-undefined");
        break;
    case 14:
        printf("base-samples-frame-frame-mode-t-mode-uyvy");
        break;
    case 15:
        printf("base-samples-frame-frame-mode-t-raw-modes");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_Quaterniond(const char *paramName, const asn1SccWrappers_Quaterniond *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Quaterniond ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("im ");
    {
        int i134;
        printf("{");
        for(i134=0; i134<(*pData).im.nCount; i134++) {
            if (i134) 
                printf(",");
            printf("%f", (*pData).im.arr[i134]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).re);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointTransformVector_m(const char *paramName, const asn1SccBase_JointTransformVector_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointTransformVector-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i135;
        printf("{");
        for(i135=0; i135<(*pData).names.nCount; i135++) {
            if (i135) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i135].nCount; i++)
                    printf("%02x", (*pData).names.arr[i135].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i136;
        printf("{");
        for(i136=0; i136<(*pData).elements.nCount; i136++) {
            if (i136) 
                printf(",");
            printf("{");
            printf("sourceframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).elements.arr[i136].sourceframe.nCount; i++)
                    printf("%02x", (*pData).elements.arr[i136].sourceframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("targetframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).elements.arr[i136].targetframe.nCount; i++)
                    printf("%02x", (*pData).elements.arr[i136].targetframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("rotationaxis ");
            printf("{");
            printf("data ");
            {
                int i137;
                printf("{");
                for(i137=0; i137<(*pData).elements.arr[i136].rotationaxis.data.nCount; i137++) {
                    if (i137) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i136].rotationaxis.data.arr[i137]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_BodyState_m(const char *paramName, const asn1SccBase_samples_BodyState_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-BodyState-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("pose ");
    printf("{");
    printf("translation ");
    printf("{");
    printf("data ");
    {
        int i138;
        printf("{");
        for(i138=0; i138<(*pData).pose.translation.data.nCount; i138++) {
            if (i138) 
                printf(",");
            printf("%f", (*pData).pose.translation.data.arr[i138]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("{");
    printf("im ");
    {
        int i139;
        printf("{");
        for(i139=0; i139<(*pData).pose.orientation.im.nCount; i139++) {
            if (i139) 
                printf(",");
            printf("%f", (*pData).pose.orientation.im.arr[i139]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).pose.orientation.re);
    printf("}");
    printf(", ");
    printf("cov ");
    printf("{");
    printf("data ");
    {
        int i140;
        printf("{");
        for(i140=0; i140<(*pData).pose.cov.data.nCount; i140++) {
            if (i140) 
                printf(",");
            printf("%f", (*pData).pose.cov.data.arr[i140]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
    printf(", ");
    printf("velocity ");
    printf("{");
    printf("vel ");
    printf("{");
    printf("data ");
    {
        int i141;
        printf("{");
        for(i141=0; i141<(*pData).velocity.vel.data.nCount; i141++) {
            if (i141) 
                printf(",");
            printf("%f", (*pData).velocity.vel.data.arr[i141]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("rot ");
    printf("{");
    printf("data ");
    {
        int i142;
        printf("{");
        for(i142=0; i142<(*pData).velocity.rot.data.nCount; i142++) {
            if (i142) 
                printf(",");
            printf("%f", (*pData).velocity.rot.data.arr[i142]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov ");
    printf("{");
    printf("data ");
    {
        int i143;
        printf("{");
        for(i143=0; i143<(*pData).velocity.cov.data.nCount; i143++) {
            if (i143) 
                printf(",");
            printf("%f", (*pData).velocity.cov.data.arr[i143]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointTransform(const char *paramName, const asn1SccBase_JointTransform *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointTransform ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("sourceframe ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).sourceframe.nCount; i++)
            printf("%02x", (*pData).sourceframe.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("targetframe ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).targetframe.nCount; i++)
            printf("%02x", (*pData).targetframe.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("rotationaxis ");
    printf("{");
    printf("data ");
    {
        int i144;
        printf("{");
        for(i144=0; i144<(*pData).rotationaxis.data.nCount; i144++) {
            if (i144) 
                printf(",");
            printf("%f", (*pData).rotationaxis.data.arr[i144]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_frame_frame_size_t(const char *paramName, const asn1SccBase_samples_frame_frame_size_t *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-frame-frame-size-t ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("width ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).width);
    #else
    printf("%d", (*pData).width);
    #endif
    printf(", ");
    printf("height ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).height);
    #else
    printf("%d", (*pData).height);
    #endif
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Std_orogen_typekits_mtype_std_vector_base_Wrench(const char *paramName, const asn1SccStd_orogen_typekits_mtype_std_vector_base_Wrench *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Std-orogen-typekits-mtype-std-vector-base-Wrench ::= ", paramName);
    printf("%s ", paramName);
    {
        int i145;
        printf("{");
        for(i145=0; i145<(*pData).nCount; i145++) {
            if (i145) 
                printf(",");
            printf("{");
            printf("force ");
            printf("{");
            printf("data ");
            {
                int i146;
                printf("{");
                for(i146=0; i146<(*pData).arr[i145].force.data.nCount; i146++) {
                    if (i146) 
                        printf(",");
                    printf("%f", (*pData).arr[i145].force.data.arr[i146]);
                }
                printf("}");
            }
            printf("}");
            printf(", ");
            printf("torque ");
            printf("{");
            printf("data ");
            {
                int i147;
                printf("{");
                for(i147=0; i147<(*pData).arr[i145].torque.data.nCount; i147++) {
                    if (i147) 
                        printf(",");
                    printf("%f", (*pData).arr[i145].torque.data.arr[i147]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_NamedVector_Base_JointTrajectory(const char *paramName, const asn1SccBase_NamedVector_Base_JointTrajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-NamedVector-Base-JointTrajectory ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i148;
        printf("{");
        for(i148=0; i148<(*pData).names.nCount; i148++) {
            if (i148) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i148].nCount; i++)
                    printf("%02x", (*pData).names.arr[i148].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i149;
        printf("{");
        for(i149=0; i149<(*pData).elements.nCount; i149++) {
            if (i149) 
                printf(",");
            {
                int i150;
                printf("{");
                for(i150=0; i150<(*pData).elements.arr[i149].nCount; i150++) {
                    if (i150) 
                        printf(",");
                    printf("{");
                    printf("position ");
                    printf("%f", (*pData).elements.arr[i149].arr[i150].position);
                    printf(", ");
                    printf("speed ");
                    printf("%f", (*pData).elements.arr[i149].arr[i150].speed);
                    printf(", ");
                    printf("effort ");
                    printf("%f", (*pData).elements.arr[i149].arr[i150].effort);
                    printf(", ");
                    printf("raw ");
                    printf("%f", (*pData).elements.arr[i149].arr[i150].raw);
                    printf(", ");
                    printf("acceleration ");
                    printf("%f", (*pData).elements.arr[i149].arr[i150].acceleration);
                    printf("}");
                }
                printf("}");
            }
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_String(const char *paramName, const asn1SccT_String *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-String ::= ", paramName);
    printf("%s ", paramName);
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).nCount; i++)
            printf("%02x", (*pData).arr[i]);
        printf("'H");
    }

#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_JointTrajectory(const char *paramName, const asn1SccBase_JointTrajectory *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-JointTrajectory ::= ", paramName);
    printf("%s ", paramName);
    {
        int i151;
        printf("{");
        for(i151=0; i151<(*pData).nCount; i151++) {
            if (i151) 
                printf(",");
            printf("{");
            printf("position ");
            printf("%f", (*pData).arr[i151].position);
            printf(", ");
            printf("speed ");
            printf("%f", (*pData).arr[i151].speed);
            printf(", ");
            printf("effort ");
            printf("%f", (*pData).arr[i151].effort);
            printf(", ");
            printf("raw ");
            printf("%f", (*pData).arr[i151].raw);
            printf(", ");
            printf("acceleration ");
            printf("%f", (*pData).arr[i151].acceleration);
            printf("}");
        }
        printf("}");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_AngleAxisd(const char *paramName, const asn1SccWrappers_AngleAxisd *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-AngleAxisd ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("angle ");
    printf("%f", (*pData).angle);
    printf(", ");
    printf("axis ");
    {
        int i152;
        printf("{");
        for(i152=0; i152<(*pData).axis.nCount; i152++) {
            if (i152) 
                printf(",");
            printf("%f", (*pData).axis.arr[i152]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_SonarScan(const char *paramName, const asn1SccBase_samples_SonarScan *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-SonarScan ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("data ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).data.nCount; i++)
            printf("%02x", (*pData).data.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("time-beams ");
    {
        int i153;
        printf("{");
        for(i153=0; i153<(*pData).time_beams.nCount; i153++) {
            if (i153) 
                printf(",");
            printf("{");
            printf("microseconds ");
            #if WORD_SIZE==8
            printf("%lld", (*pData).time_beams.arr[i153].microseconds);
            #else
            printf("%d", (*pData).time_beams.arr[i153].microseconds);
            #endif
            printf("}");
        }
        printf("}");
    }
    printf(", ");
    printf("number-of-beams ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).number_of_beams);
    #else
    printf("%d", (*pData).number_of_beams);
    #endif
    printf(", ");
    printf("number-of-bins ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).number_of_bins);
    #else
    printf("%d", (*pData).number_of_bins);
    #endif
    printf(", ");
    printf("start-bearing ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).start_bearing.rad);
    printf("}");
    printf(", ");
    printf("angular-resolution ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).angular_resolution.rad);
    printf("}");
    printf(", ");
    printf("sampling-interval ");
    printf("%f", (*pData).sampling_interval);
    printf(", ");
    printf("speed-of-sound ");
    printf("%f", (*pData).speed_of_sound);
    printf(", ");
    printf("beamwidth-horizontal ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).beamwidth_horizontal.rad);
    printf("}");
    printf(", ");
    printf("beamwidth-vertical ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).beamwidth_vertical.rad);
    printf("}");
    printf(", ");
    printf("memory-layout-column ");
    printf("%s", (int)(*pData).memory_layout_column?"TRUE":"FALSE");
    printf(", ");
    printf("polar-coordinates ");
    printf("%s", (int)(*pData).polar_coordinates?"TRUE":"FALSE");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_DistanceImage(const char *paramName, const asn1SccBase_samples_DistanceImage *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-DistanceImage ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("width ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).width);
    #else
    printf("%d", (*pData).width);
    #endif
    printf(", ");
    printf("height ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).height);
    #else
    printf("%d", (*pData).height);
    #endif
    printf(", ");
    printf("scale-x ");
    printf("%f", (*pData).scale_x);
    printf(", ");
    printf("scale-y ");
    printf("%f", (*pData).scale_y);
    printf(", ");
    printf("center-x ");
    printf("%f", (*pData).center_x);
    printf(", ");
    printf("center-y ");
    printf("%f", (*pData).center_y);
    printf(", ");
    printf("data ");
    {
        int i154;
        printf("{");
        for(i154=0; i154<(*pData).data.nCount; i154++) {
            if (i154) 
                printf(",");
            printf("%f", (*pData).data.arr[i154]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_Matrix4d(const char *paramName, const asn1SccWrappers_Matrix4d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Matrix4d ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i155;
        printf("{");
        for(i155=0; i155<(*pData).data.nCount; i155++) {
            if (i155) 
                printf(",");
            printf("%f", (*pData).data.arr[i155]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Waypoint_m(const char *paramName, const asn1SccBase_Waypoint_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Waypoint-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("position ");
    printf("{");
    printf("data ");
    {
        int i156;
        printf("{");
        for(i156=0; i156<(*pData).position.data.nCount; i156++) {
            if (i156) 
                printf(",");
            printf("%f", (*pData).position.data.arr[i156]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("heading ");
    printf("%f", (*pData).heading);
    printf(", ");
    printf("tol-position ");
    printf("%f", (*pData).tol_position);
    printf(", ");
    printf("tol-heading ");
    printf("%f", (*pData).tol_heading);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_Pressure(const char *paramName, const asn1SccBase_samples_Pressure *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-Pressure ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("pascal ");
    printf("%f", (*pData).pascal);
    printf(", ");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_NamedVector_base_JointTransform_m(const char *paramName, const asn1SccBase_NamedVector_base_JointTransform_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-NamedVector-base-JointTransform-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("names ");
    {
        int i157;
        printf("{");
        for(i157=0; i157<(*pData).names.nCount; i157++) {
            if (i157) 
                printf(",");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).names.arr[i157].nCount; i++)
                    printf("%02x", (*pData).names.arr[i157].arr[i]);
                printf("'H");
            }

        }
        printf("}");
    }
    printf(", ");
    printf("elements ");
    {
        int i158;
        printf("{");
        for(i158=0; i158<(*pData).elements.nCount; i158++) {
            if (i158) 
                printf(",");
            printf("{");
            printf("sourceframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).elements.arr[i158].sourceframe.nCount; i++)
                    printf("%02x", (*pData).elements.arr[i158].sourceframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("targetframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).elements.arr[i158].targetframe.nCount; i++)
                    printf("%02x", (*pData).elements.arr[i158].targetframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("rotationaxis ");
            printf("{");
            printf("data ");
            {
                int i159;
                printf("{");
                for(i159=0; i159<(*pData).elements.arr[i158].rotationaxis.data.nCount; i159++) {
                    if (i159) 
                        printf(",");
                    printf("%f", (*pData).elements.arr[i158].rotationaxis.data.arr[i159]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Std_orogen_typekits_mtype_std_vector_base_JointTransform(const char *paramName, const asn1SccStd_orogen_typekits_mtype_std_vector_base_JointTransform *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Std-orogen-typekits-mtype-std-vector-base-JointTransform ::= ", paramName);
    printf("%s ", paramName);
    {
        int i160;
        printf("{");
        for(i160=0; i160<(*pData).nCount; i160++) {
            if (i160) 
                printf(",");
            printf("{");
            printf("sourceframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).arr[i160].sourceframe.nCount; i++)
                    printf("%02x", (*pData).arr[i160].sourceframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("targetframe ");
            {
                int i;
                printf("'");
                for(i=0; i<(*pData).arr[i160].targetframe.nCount; i++)
                    printf("%02x", (*pData).arr[i160].targetframe.arr[i]);
                printf("'H");
            }

            printf(", ");
            printf("rotationaxis ");
            printf("{");
            printf("data ");
            {
                int i161;
                printf("{");
                for(i161=0; i161<(*pData).arr[i160].rotationaxis.data.nCount; i161++) {
                    if (i161) 
                        printf(",");
                    printf("%f", (*pData).arr[i160].rotationaxis.data.arr[i161]);
                }
                printf("}");
            }
            printf("}");
            printf("}");
        }
        printf("}");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Time(const char *paramName, const asn1SccBase_Time *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Time ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).microseconds);
    #else
    printf("%d", (*pData).microseconds);
    #endif
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1DummyBase_T(const char *paramName, const asn1SccDummyBase_T *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s DummyBase-T ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_UInt32(const char *paramName, const asn1SccT_UInt32 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-UInt32 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_commands_Motion2D(const char *paramName, const asn1SccBase_commands_Motion2D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-commands-Motion2D ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("translation ");
    printf("%f", (*pData).translation);
    printf(", ");
    printf("rotation ");
    printf("%f", (*pData).rotation);
    printf(", ");
    printf("heading ");
    printf("{");
    printf("rad ");
    printf("%f", (*pData).heading.rad);
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_UInt16(const char *paramName, const asn1SccT_UInt16 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-UInt16 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1T_Int64(const char *paramName, const asn1SccT_Int64 *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s T-Int64 ::= ", paramName);
    printf("%s ", paramName);
    #if WORD_SIZE==8
    printf("%lld", (*pData));
    #else
    printf("%d", (*pData));
    #endif
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Waypoint(const char *paramName, const asn1SccBase_Waypoint *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Waypoint ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("position ");
    printf("{");
    printf("data ");
    {
        int i162;
        printf("{");
        for(i162=0; i162<(*pData).position.data.nCount; i162++) {
            if (i162) 
                printf(",");
            printf("%f", (*pData).position.data.arr[i162]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("heading ");
    printf("%f", (*pData).heading);
    printf(", ");
    printf("tol-position ");
    printf("%f", (*pData).tol_position);
    printf(", ");
    printf("tol-heading ");
    printf("%f", (*pData).tol_heading);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Wrappers_Vector3d(const char *paramName, const asn1SccWrappers_Vector3d *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Wrappers-Vector3d ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("data ");
    {
        int i163;
        printf("{");
        for(i163=0; i163<(*pData).data.nCount; i163++) {
            if (i163) 
                printf(",");
            printf("%f", (*pData).data.arr[i163]);
        }
        printf("}");
    }
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_Pose(const char *paramName, const asn1SccBase_Pose *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-Pose ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("position ");
    printf("{");
    printf("data ");
    {
        int i164;
        printf("{");
        for(i164=0; i164<(*pData).position.data.nCount; i164++) {
            if (i164) 
                printf(",");
            printf("%f", (*pData).position.data.arr[i164]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("{");
    printf("im ");
    {
        int i165;
        printf("{");
        for(i165=0; i165<(*pData).orientation.im.nCount; i165++) {
            if (i165) 
                printf(",");
            printf("%f", (*pData).orientation.im.arr[i165]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).orientation.re);
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_RigidBodyState_m(const char *paramName, const asn1SccBase_samples_RigidBodyState_m *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-RigidBodyState-m ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("time ");
    printf("{");
    printf("microseconds ");
    #if WORD_SIZE==8
    printf("%lld", (*pData).time.microseconds);
    #else
    printf("%d", (*pData).time.microseconds);
    #endif
    printf("}");
    printf(", ");
    printf("sourceframe ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).sourceframe.nCount; i++)
            printf("%02x", (*pData).sourceframe.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("targetframe ");
    {
        int i;
        printf("'");
        for(i=0; i<(*pData).targetframe.nCount; i++)
            printf("%02x", (*pData).targetframe.arr[i]);
        printf("'H");
    }

    printf(", ");
    printf("position ");
    printf("{");
    printf("data ");
    {
        int i166;
        printf("{");
        for(i166=0; i166<(*pData).position.data.nCount; i166++) {
            if (i166) 
                printf(",");
            printf("%f", (*pData).position.data.arr[i166]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-position ");
    printf("{");
    printf("data ");
    {
        int i167;
        printf("{");
        for(i167=0; i167<(*pData).cov_position.data.nCount; i167++) {
            if (i167) 
                printf(",");
            printf("%f", (*pData).cov_position.data.arr[i167]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("orientation ");
    printf("{");
    printf("im ");
    {
        int i168;
        printf("{");
        for(i168=0; i168<(*pData).orientation.im.nCount; i168++) {
            if (i168) 
                printf(",");
            printf("%f", (*pData).orientation.im.arr[i168]);
        }
        printf("}");
    }
    printf(", ");
    printf("re ");
    printf("%f", (*pData).orientation.re);
    printf("}");
    printf(", ");
    printf("cov-orientation ");
    printf("{");
    printf("data ");
    {
        int i169;
        printf("{");
        for(i169=0; i169<(*pData).cov_orientation.data.nCount; i169++) {
            if (i169) 
                printf(",");
            printf("%f", (*pData).cov_orientation.data.arr[i169]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("velocity ");
    printf("{");
    printf("data ");
    {
        int i170;
        printf("{");
        for(i170=0; i170<(*pData).velocity.data.nCount; i170++) {
            if (i170) 
                printf(",");
            printf("%f", (*pData).velocity.data.arr[i170]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-velocity ");
    printf("{");
    printf("data ");
    {
        int i171;
        printf("{");
        for(i171=0; i171<(*pData).cov_velocity.data.nCount; i171++) {
            if (i171) 
                printf(",");
            printf("%f", (*pData).cov_velocity.data.arr[i171]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("angular-velocity ");
    printf("{");
    printf("data ");
    {
        int i172;
        printf("{");
        for(i172=0; i172<(*pData).angular_velocity.data.nCount; i172++) {
            if (i172) 
                printf(",");
            printf("%f", (*pData).angular_velocity.data.arr[i172]);
        }
        printf("}");
    }
    printf("}");
    printf(", ");
    printf("cov-angular-velocity ");
    printf("{");
    printf("data ");
    {
        int i173;
        printf("{");
        for(i173=0; i173<(*pData).cov_angular_velocity.data.nCount; i173++) {
            if (i173) 
                printf(",");
            printf("%f", (*pData).cov_angular_velocity.data.arr[i173]);
        }
        printf("}");
    }
    printf("}");
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_samples_LASER_RANGE_ERRORS(const char *paramName, const asn1SccBase_samples_LASER_RANGE_ERRORS *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-samples-LASER-RANGE-ERRORS ::= ", paramName);
    printf("%s ", paramName);
    switch((*pData)) {
    case 0:
        printf("base-samples-laser-range-errors-end-laser-range-errors");
        break;
    case 1:
        printf("base-samples-laser-range-errors-max-range-error");
        break;
    case 2:
        printf("base-samples-laser-range-errors-measurement-error");
        break;
    case 3:
        printf("base-samples-laser-range-errors-other-range-errors");
        break;
    case 4:
        printf("base-samples-laser-range-errors-too-far");
        break;
    case 5:
        printf("base-samples-laser-range-errors-too-near");
        break;
    default:
        printf("Invalid value in ENUMERATED ((*pData))");
    }
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

void PrintASN1Base_commands_Speed6D(const char *paramName, const asn1SccBase_commands_Speed6D *pData)
{
    (void)paramName;
    (void)pData;
#ifdef __linux__
    pthread_mutex_lock(&g_printing_mutex);
#endif
#ifdef __unix__
    //printf("%s Base-commands-Speed6D ::= ", paramName);
    printf("%s ", paramName);
    printf("{");
    printf("surge ");
    printf("%f", (*pData).surge);
    printf(", ");
    printf("sway ");
    printf("%f", (*pData).sway);
    printf(", ");
    printf("heave ");
    printf("%f", (*pData).heave);
    printf(", ");
    printf("roll ");
    printf("%f", (*pData).roll);
    printf(", ");
    printf("pitch ");
    printf("%f", (*pData).pitch);
    printf(", ");
    printf("yaw ");
    printf("%f", (*pData).yaw);
    printf("}");
#endif
#ifdef __linux__
    pthread_mutex_unlock(&g_printing_mutex);
#endif
}

