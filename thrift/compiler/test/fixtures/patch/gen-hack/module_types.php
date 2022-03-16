<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * MyStruct
 */
class MyStruct implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'boolVal',
      'type' => \TType::BOOL,
    ),
    2 => shape(
      'var' => 'byteVal',
      'type' => \TType::BYTE,
    ),
    3 => shape(
      'var' => 'i16Val',
      'type' => \TType::I16,
    ),
    4 => shape(
      'var' => 'i32Val',
      'type' => \TType::I32,
    ),
    5 => shape(
      'var' => 'i64Val',
      'type' => \TType::I64,
    ),
    6 => shape(
      'var' => 'floatVal',
      'type' => \TType::FLOAT,
    ),
    7 => shape(
      'var' => 'doubleVal',
      'type' => \TType::DOUBLE,
    ),
    8 => shape(
      'var' => 'stringVal',
      'type' => \TType::STRING,
    ),
    9 => shape(
      'var' => 'binaryVal',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'boolVal' => 1,
    'byteVal' => 2,
    'i16Val' => 3,
    'i32Val' => 4,
    'i64Val' => 5,
    'floatVal' => 6,
    'doubleVal' => 7,
    'stringVal' => 8,
    'binaryVal' => 9,
  ];

  const type TConstructorShape = shape(
    ?'boolVal' => ?bool,
    ?'byteVal' => ?int,
    ?'i16Val' => ?int,
    ?'i32Val' => ?int,
    ?'i64Val' => ?int,
    ?'floatVal' => ?float,
    ?'doubleVal' => ?float,
    ?'stringVal' => ?string,
    ?'binaryVal' => ?string,
  );

  const type TShape = shape(
    'boolVal' => bool,
    'byteVal' => int,
    'i16Val' => int,
    'i32Val' => int,
    'i64Val' => int,
    'floatVal' => float,
    'doubleVal' => float,
    'stringVal' => string,
    'binaryVal' => string,
    ...
  );
  const int STRUCTURAL_ID = 4110803845450216321;
  /**
   * Original thrift field:-
   * 1: bool boolVal
   */
  public bool $boolVal;
  /**
   * Original thrift field:-
   * 2: byte byteVal
   */
  public int $byteVal;
  /**
   * Original thrift field:-
   * 3: i16 i16Val
   */
  public int $i16Val;
  /**
   * Original thrift field:-
   * 4: i32 i32Val
   */
  public int $i32Val;
  /**
   * Original thrift field:-
   * 5: i64 i64Val
   */
  public int $i64Val;
  /**
   * Original thrift field:-
   * 6: float floatVal
   */
  public float $floatVal;
  /**
   * Original thrift field:-
   * 7: double doubleVal
   */
  public float $doubleVal;
  /**
   * Original thrift field:-
   * 8: string stringVal
   */
  public string $stringVal;
  /**
   * Original thrift field:-
   * 9: binary binaryVal
   */
  public string $binaryVal;

  public function __construct(?bool $boolVal = null, ?int $byteVal = null, ?int $i16Val = null, ?int $i32Val = null, ?int $i64Val = null, ?float $floatVal = null, ?float $doubleVal = null, ?string $stringVal = null, ?string $binaryVal = null  )[] {
    $this->boolVal = $boolVal ?? false;
    $this->byteVal = $byteVal ?? 0;
    $this->i16Val = $i16Val ?? 0;
    $this->i32Val = $i32Val ?? 0;
    $this->i64Val = $i64Val ?? 0;
    $this->floatVal = $floatVal ?? 0.0;
    $this->doubleVal = $doubleVal ?? 0.0;
    $this->stringVal = $stringVal ?? '';
    $this->binaryVal = $binaryVal ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'boolVal'),
      Shapes::idx($shape, 'byteVal'),
      Shapes::idx($shape, 'i16Val'),
      Shapes::idx($shape, 'i32Val'),
      Shapes::idx($shape, 'i64Val'),
      Shapes::idx($shape, 'floatVal'),
      Shapes::idx($shape, 'doubleVal'),
      Shapes::idx($shape, 'stringVal'),
      Shapes::idx($shape, 'binaryVal'),
    );
  }

  public function getName()[]: string {
    return 'MyStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyStruct",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "boolVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BYTE_TYPE,
                )
              ),
              "name" => "byteVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I16_TYPE,
                )
              ),
              "name" => "i16Val",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "i32Val",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 5,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "i64Val",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 6,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_FLOAT_TYPE,
                )
              ),
              "name" => "floatVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 7,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_DOUBLE_TYPE,
                )
              ),
              "name" => "doubleVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 8,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "stringVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 9,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BINARY_TYPE,
                )
              ),
              "name" => "binaryVal",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        'GeneratePatch' => GeneratePatch::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['boolVal'],
      $shape['byteVal'],
      $shape['i16Val'],
      $shape['i32Val'],
      $shape['i64Val'],
      $shape['floatVal'],
      $shape['doubleVal'],
      $shape['stringVal'],
      $shape['binaryVal'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'boolVal' => $this->boolVal,
      'byteVal' => $this->byteVal,
      'i16Val' => $this->i16Val,
      'i32Val' => $this->i32Val,
      'i64Val' => $this->i64Val,
      'floatVal' => $this->floatVal,
      'doubleVal' => $this->doubleVal,
      'stringVal' => $this->stringVal,
      'binaryVal' => $this->binaryVal,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'boolVal') !== null) {
      $this->boolVal = /* HH_FIXME[4110] */ $parsed['boolVal'];
    }    
    if (idx($parsed, 'byteVal') !== null) {
      $_tmp0 = (int)/* HH_FIXME[4110] */ $parsed['byteVal'];
      if ($_tmp0 > 0x7f) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->byteVal = (int)$_tmp0;
      }
    }    
    if (idx($parsed, 'i16Val') !== null) {
      $_tmp1 = (int)/* HH_FIXME[4110] */ $parsed['i16Val'];
      if ($_tmp1 > 0x7fff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->i16Val = (int)$_tmp1;
      }
    }    
    if (idx($parsed, 'i32Val') !== null) {
      $_tmp2 = (int)/* HH_FIXME[4110] */ $parsed['i32Val'];
      if ($_tmp2 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->i32Val = (int)$_tmp2;
      }
    }    
    if (idx($parsed, 'i64Val') !== null) {
      $this->i64Val = /* HH_FIXME[4110] */ $parsed['i64Val'];
    }    
    if (idx($parsed, 'floatVal') !== null) {
      $this->floatVal = /* HH_FIXME[4110] */ $parsed['floatVal'];
    }    
    if (idx($parsed, 'doubleVal') !== null) {
      $this->doubleVal = /* HH_FIXME[4110] */ $parsed['doubleVal'];
    }    
    if (idx($parsed, 'stringVal') !== null) {
      $this->stringVal = /* HH_FIXME[4110] */ $parsed['stringVal'];
    }    
    if (idx($parsed, 'binaryVal') !== null) {
      $this->binaryVal = /* HH_FIXME[4110] */ $parsed['binaryVal'];
    }    
  }

}

/**
 * Original thrift struct:-
 * MyStructPatch
 */
class MyStructPatch implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'boolVal',
      'type' => \TType::STRUCT,
      'class' => BoolPatch::class,
    ),
    2 => shape(
      'var' => 'byteVal',
      'type' => \TType::STRUCT,
      'class' => BytePatch::class,
    ),
    3 => shape(
      'var' => 'i16Val',
      'type' => \TType::STRUCT,
      'class' => I16Patch::class,
    ),
    4 => shape(
      'var' => 'i32Val',
      'type' => \TType::STRUCT,
      'class' => I32Patch::class,
    ),
    5 => shape(
      'var' => 'i64Val',
      'type' => \TType::STRUCT,
      'class' => I64Patch::class,
    ),
    6 => shape(
      'var' => 'floatVal',
      'type' => \TType::STRUCT,
      'class' => FloatPatch::class,
    ),
    7 => shape(
      'var' => 'doubleVal',
      'type' => \TType::STRUCT,
      'class' => DoublePatch::class,
    ),
    8 => shape(
      'var' => 'stringVal',
      'type' => \TType::STRUCT,
      'class' => StringPatch::class,
    ),
    9 => shape(
      'var' => 'binaryVal',
      'type' => \TType::STRUCT,
      'class' => BinaryPatch::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'boolVal' => 1,
    'byteVal' => 2,
    'i16Val' => 3,
    'i32Val' => 4,
    'i64Val' => 5,
    'floatVal' => 6,
    'doubleVal' => 7,
    'stringVal' => 8,
    'binaryVal' => 9,
  ];

  const type TConstructorShape = shape(
    ?'boolVal' => ?BoolPatch,
    ?'byteVal' => ?BytePatch,
    ?'i16Val' => ?I16Patch,
    ?'i32Val' => ?I32Patch,
    ?'i64Val' => ?I64Patch,
    ?'floatVal' => ?FloatPatch,
    ?'doubleVal' => ?DoublePatch,
    ?'stringVal' => ?StringPatch,
    ?'binaryVal' => ?BinaryPatch,
  );

  const type TShape = shape(
    ?'boolVal' => ?BoolPatch::TShape,
    ?'byteVal' => ?BytePatch::TShape,
    ?'i16Val' => ?I16Patch::TShape,
    ?'i32Val' => ?I32Patch::TShape,
    ?'i64Val' => ?I64Patch::TShape,
    ?'floatVal' => ?FloatPatch::TShape,
    ?'doubleVal' => ?DoublePatch::TShape,
    ?'stringVal' => ?StringPatch::TShape,
    ?'binaryVal' => ?BinaryPatch::TShape,
    ...
  );
  const int STRUCTURAL_ID = 2466552037793237492;
  /**
   * Original thrift field:-
   * 1: struct patch.BoolPatch boolVal
   */
  public ?BoolPatch $boolVal;
  /**
   * Original thrift field:-
   * 2: struct patch.BytePatch byteVal
   */
  public ?BytePatch $byteVal;
  /**
   * Original thrift field:-
   * 3: struct patch.I16Patch i16Val
   */
  public ?I16Patch $i16Val;
  /**
   * Original thrift field:-
   * 4: struct patch.I32Patch i32Val
   */
  public ?I32Patch $i32Val;
  /**
   * Original thrift field:-
   * 5: struct patch.I64Patch i64Val
   */
  public ?I64Patch $i64Val;
  /**
   * Original thrift field:-
   * 6: struct patch.FloatPatch floatVal
   */
  public ?FloatPatch $floatVal;
  /**
   * Original thrift field:-
   * 7: struct patch.DoublePatch doubleVal
   */
  public ?DoublePatch $doubleVal;
  /**
   * Original thrift field:-
   * 8: struct patch.StringPatch stringVal
   */
  public ?StringPatch $stringVal;
  /**
   * Original thrift field:-
   * 9: struct patch.BinaryPatch binaryVal
   */
  public ?BinaryPatch $binaryVal;

  public function __construct(?BoolPatch $boolVal = null, ?BytePatch $byteVal = null, ?I16Patch $i16Val = null, ?I32Patch $i32Val = null, ?I64Patch $i64Val = null, ?FloatPatch $floatVal = null, ?DoublePatch $doubleVal = null, ?StringPatch $stringVal = null, ?BinaryPatch $binaryVal = null  )[] {
    $this->boolVal = $boolVal;
    $this->byteVal = $byteVal;
    $this->i16Val = $i16Val;
    $this->i32Val = $i32Val;
    $this->i64Val = $i64Val;
    $this->floatVal = $floatVal;
    $this->doubleVal = $doubleVal;
    $this->stringVal = $stringVal;
    $this->binaryVal = $binaryVal;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'boolVal'),
      Shapes::idx($shape, 'byteVal'),
      Shapes::idx($shape, 'i16Val'),
      Shapes::idx($shape, 'i32Val'),
      Shapes::idx($shape, 'i64Val'),
      Shapes::idx($shape, 'floatVal'),
      Shapes::idx($shape, 'doubleVal'),
      Shapes::idx($shape, 'stringVal'),
      Shapes::idx($shape, 'binaryVal'),
    );
  }

  public function getName()[]: string {
    return 'MyStructPatch';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyStructPatch",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.BoolPatch",
                    )
                  ),
                )
              ),
              "name" => "boolVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.BytePatch",
                    )
                  ),
                )
              ),
              "name" => "byteVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.I16Patch",
                    )
                  ),
                )
              ),
              "name" => "i16Val",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.I32Patch",
                    )
                  ),
                )
              ),
              "name" => "i32Val",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 5,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.I64Patch",
                    )
                  ),
                )
              ),
              "name" => "i64Val",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 6,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.FloatPatch",
                    )
                  ),
                )
              ),
              "name" => "floatVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 7,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.DoublePatch",
                    )
                  ),
                )
              ),
              "name" => "doubleVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 8,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.StringPatch",
                    )
                  ),
                )
              ),
              "name" => "stringVal",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 9,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "patch.BinaryPatch",
                    )
                  ),
                )
              ),
              "name" => "binaryVal",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'boolVal' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
        'byteVal' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
        'i16Val' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
        'i32Val' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
        'i64Val' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
        'floatVal' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
        'doubleVal' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
        'stringVal' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
        'binaryVal' => shape(
          'field' => dict[],
          'type' => dict[
            'facebook_thrift_annotation_thrift_Experimental' => facebook_thrift_annotation_thrift_Experimental::fromShape(
              shape(
              )
            ),
          ],
        ),
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'boolVal') === null ? null : (BoolPatch::__fromShape($shape['boolVal'])),
      Shapes::idx($shape, 'byteVal') === null ? null : (BytePatch::__fromShape($shape['byteVal'])),
      Shapes::idx($shape, 'i16Val') === null ? null : (I16Patch::__fromShape($shape['i16Val'])),
      Shapes::idx($shape, 'i32Val') === null ? null : (I32Patch::__fromShape($shape['i32Val'])),
      Shapes::idx($shape, 'i64Val') === null ? null : (I64Patch::__fromShape($shape['i64Val'])),
      Shapes::idx($shape, 'floatVal') === null ? null : (FloatPatch::__fromShape($shape['floatVal'])),
      Shapes::idx($shape, 'doubleVal') === null ? null : (DoublePatch::__fromShape($shape['doubleVal'])),
      Shapes::idx($shape, 'stringVal') === null ? null : (StringPatch::__fromShape($shape['stringVal'])),
      Shapes::idx($shape, 'binaryVal') === null ? null : (BinaryPatch::__fromShape($shape['binaryVal'])),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'boolVal' => $this->boolVal?->__toShape(),
      'byteVal' => $this->byteVal?->__toShape(),
      'i16Val' => $this->i16Val?->__toShape(),
      'i32Val' => $this->i32Val?->__toShape(),
      'i64Val' => $this->i64Val?->__toShape(),
      'floatVal' => $this->floatVal?->__toShape(),
      'doubleVal' => $this->doubleVal?->__toShape(),
      'stringVal' => $this->stringVal?->__toShape(),
      'binaryVal' => $this->binaryVal?->__toShape(),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'boolVal') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['boolVal']);
      $_tmp1 = BoolPatch::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->boolVal = $_tmp1;
    }    
    if (idx($parsed, 'byteVal') !== null) {
      $_tmp2 = json_encode(/* HH_FIXME[4110] */ $parsed['byteVal']);
      $_tmp3 = BytePatch::withDefaultValues();
      $_tmp3->readFromJson($_tmp2);
      $this->byteVal = $_tmp3;
    }    
    if (idx($parsed, 'i16Val') !== null) {
      $_tmp4 = json_encode(/* HH_FIXME[4110] */ $parsed['i16Val']);
      $_tmp5 = I16Patch::withDefaultValues();
      $_tmp5->readFromJson($_tmp4);
      $this->i16Val = $_tmp5;
    }    
    if (idx($parsed, 'i32Val') !== null) {
      $_tmp6 = json_encode(/* HH_FIXME[4110] */ $parsed['i32Val']);
      $_tmp7 = I32Patch::withDefaultValues();
      $_tmp7->readFromJson($_tmp6);
      $this->i32Val = $_tmp7;
    }    
    if (idx($parsed, 'i64Val') !== null) {
      $_tmp8 = json_encode(/* HH_FIXME[4110] */ $parsed['i64Val']);
      $_tmp9 = I64Patch::withDefaultValues();
      $_tmp9->readFromJson($_tmp8);
      $this->i64Val = $_tmp9;
    }    
    if (idx($parsed, 'floatVal') !== null) {
      $_tmp10 = json_encode(/* HH_FIXME[4110] */ $parsed['floatVal']);
      $_tmp11 = FloatPatch::withDefaultValues();
      $_tmp11->readFromJson($_tmp10);
      $this->floatVal = $_tmp11;
    }    
    if (idx($parsed, 'doubleVal') !== null) {
      $_tmp12 = json_encode(/* HH_FIXME[4110] */ $parsed['doubleVal']);
      $_tmp13 = DoublePatch::withDefaultValues();
      $_tmp13->readFromJson($_tmp12);
      $this->doubleVal = $_tmp13;
    }    
    if (idx($parsed, 'stringVal') !== null) {
      $_tmp14 = json_encode(/* HH_FIXME[4110] */ $parsed['stringVal']);
      $_tmp15 = StringPatch::withDefaultValues();
      $_tmp15->readFromJson($_tmp14);
      $this->stringVal = $_tmp15;
    }    
    if (idx($parsed, 'binaryVal') !== null) {
      $_tmp16 = json_encode(/* HH_FIXME[4110] */ $parsed['binaryVal']);
      $_tmp17 = BinaryPatch::withDefaultValues();
      $_tmp17->readFromJson($_tmp16);
      $this->binaryVal = $_tmp17;
    }    
  }

}

/**
 * Original thrift struct:-
 * MyStructValuePatch
 */
class MyStructValuePatch implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'assign',
      'type' => \TType::STRUCT,
      'class' => MyStruct::class,
    ),
    2 => shape(
      'var' => 'clear',
      'type' => \TType::BOOL,
    ),
    3 => shape(
      'var' => 'patch',
      'type' => \TType::STRUCT,
      'class' => MyStructPatch::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'assign' => 1,
    'clear' => 2,
    'patch' => 3,
  ];

  const type TConstructorShape = shape(
    ?'assign' => ?MyStruct,
    ?'clear' => ?bool,
    ?'patch' => ?MyStructPatch,
  );

  const type TShape = shape(
    ?'assign' => ?MyStruct::TShape,
    'clear' => bool,
    ?'patch' => ?MyStructPatch::TShape,
    ...
  );
  const int STRUCTURAL_ID = 2768499115510098920;
  /**
   * Assigns to a given struct. If set, all other operations are ignored.
   * 
   * Original thrift field:-
   * 1: struct module.MyStruct assign
   */
  public ?MyStruct $assign;
  /**
   * Clears a given struct. Applied first.
   * 
   * Original thrift field:-
   * 2: bool clear
   */
  public bool $clear;
  /**
   * Patches a given struct. Applied second.
   * 
   * Original thrift field:-
   * 3: struct module.MyStructPatch patch
   */
  public ?MyStructPatch $patch;

  public function __construct(?MyStruct $assign = null, ?bool $clear = null, ?MyStructPatch $patch = null  )[] {
    $this->assign = $assign;
    $this->clear = $clear ?? false;
    $this->patch = $patch;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'assign'),
      Shapes::idx($shape, 'clear'),
      Shapes::idx($shape, 'patch'),
    );
  }

  public function getName()[]: string {
    return 'MyStructValuePatch';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyStructValuePatch",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "assign",
              "is_optional" => true,
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "clear",
            )
          ),
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStructPatch",
                    )
                  ),
                )
              ),
              "name" => "patch",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'assign' => shape(
          'field' => dict[],
          'type' => dict[
            'GeneratePatch' => GeneratePatch::fromShape(
              shape(
              )
            ),
          ],
        ),
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'assign') === null ? null : (MyStruct::__fromShape($shape['assign'])),
      $shape['clear'],
      Shapes::idx($shape, 'patch') === null ? null : (MyStructPatch::__fromShape($shape['patch'])),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'assign' => $this->assign?->__toShape(),
      'clear' => $this->clear,
      'patch' => $this->patch?->__toShape(),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'assign') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['assign']);
      $_tmp1 = MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->assign = $_tmp1;
    }    
    if (idx($parsed, 'clear') !== null) {
      $this->clear = /* HH_FIXME[4110] */ $parsed['clear'];
    }    
    if (idx($parsed, 'patch') !== null) {
      $_tmp2 = json_encode(/* HH_FIXME[4110] */ $parsed['patch']);
      $_tmp3 = MyStructPatch::withDefaultValues();
      $_tmp3->readFromJson($_tmp2);
      $this->patch = $_tmp3;
    }    
  }

}

