using FunctionZeros
using Test

let zs = Array{Array{Float64,1}}(undef, 0)

    push!(zs,
          [2.4048255576957727686,
           5.5200781102863106496,
           8.6537279129110122170,
           11.791534439014281614,
           14.930917708487785948,
           18.071063967910922543,
           21.211636629879258959,
           24.352471530749302737,
           27.493479132040254796,
           30.634606468431975118,
           33.775820213573568684,
           36.917098353664043980,
           40.058425764628239295,
           43.199791713176730358,
           46.341188371661814019])

    push!(zs,
          [3.8317059702075123156,
           7.0155866698156187526,
           10.173468135062722077,
           13.323691936314223032,
           16.470630050877632813,
           19.615858510468242021,
           22.760084380592771898,
           25.903672087618382625,
           29.046828534916855067,
           32.189679910974403627,
           35.332307550083865103,
           38.474766234771615112,
           41.617094212814450886,
           44.759318997652821733,
           47.901460887185447121])

    push!(zs,
          [5.1356223018406825563,
           8.4172441403998648578,
           11.619841172149059427,
           14.795951782351260747,
           17.959819494987826455,
           21.116997053021845591,
           24.270112313573102610,
           27.420573549984557331,
           30.569204495516397037,
           33.716519509222699922,
           36.862856511283809818,
           40.008446733478192227,
           43.153453778371463270,
           46.297996677236919185,
           49.442164110416872731])

    push!(zs,
          [6.3801618959239835071,
           9.7610231299816696785,
           13.015200721698434420,
           16.223466160318768122,
           19.409415226435011554,
           22.582729593104442028,
           25.748166699294977635,
           28.908350780921757858,
           32.064852407097709483,
           35.218670738610114657,
           38.370472434756944364,
           41.520719670406775549,
           44.669743116617253071,
           47.817785691533301888,
           50.965029906205183304])

    push!(zs,
          [7.5883424345038043850,
           11.064709488501184882,
           14.372536671617589679,
           17.615966049804833042,
           20.826932956962387683,
           24.019019524771110046,
           27.199087765981251375,
           30.371007667117246902,
           33.537137711819223418,
           36.699001128744649500,
           39.857627302180889036,
           43.013737723354430016,
           46.167853512924374922,
           49.320360686390272118,
           52.471551398458022628])

    for nu in 1:5
        for n in 1:15
            @test isapprox(besselj_zero(nu-1,n), zs[nu][n])
        end
    end
end # let

@test length(besselj_zero.([.1,.2],1)) == 2
@test length(FunctionZeros.besselj_zero_asymptotic.([.1,.2],1)) == 2
